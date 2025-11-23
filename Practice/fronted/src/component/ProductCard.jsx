import {
	Box,
	Button,
	Heading,
	HStack,
	Icon,
	IconButton,
	Image,
	Input,
	Modal,
	ModalBody,
	ModalCloseButton,
	ModalContent,
	ModalFooter,
	ModalHeader,
	ModalOverlay,
	Text,
	useColorModeValue,
	useDisclosure,
	useToast,
	VStack,
} from '@chakra-ui/react';
import { useProductStore } from '../store/product';
import { useState } from 'react';

import { AiFillDelete } from 'react-icons/ai';
import { BiEditAlt } from 'react-icons/bi';

const ProductCard = ({ product }) => {
	const [updatedProduct, setUpdatedProduct] = useState(product);

	const textColor = useColorModeValue('gray.600', 'gray.200');
	const bg = useColorModeValue('white', 'gray.800');

	const { deleteProduct, updateProduct } = useProductStore();
	const toast = useToast();
	const { isOpen, onOpen, onClose } = useDisclosure();

	const handleDeleteProduct = async (pid) => {
		const { success, message } = await deleteProduct(pid);
		if (!success) {
			toast({
				title: 'Error',
				description: message,
				status: 'error',
				duration: 3000,
				isClosable: true,
			});
		} else {
			toast({
				title: 'Success',
				description: message,
				status: 'success',
				duration: 3000,
				isClosable: true,
			});
		}
	};

	const handleUpdateProduct = async (pid, updatedProduct) => {
		const { success, message } = await updateProduct(pid, updatedProduct);
		onClose();
		if (!success) {
			toast({
				title: 'Error',
				description: message,
				status: 'error',
				duration: 3000,
				isClosable: true,
			});
		} else {
			toast({
				title: 'Success',
				description: 'Product updated successfully',
				status: 'success',
				duration: 3000,
				isClosable: true,
			});
		}
	};

	return (
		<Box
			shadow="xl"
			rounded="xl"
			overflow="hidden"
			transition="all 0.3s"
			_hover={{ transform: 'scale(1.1)', shadow: 'xl' }}
			bg={bg}>
			<Image
				src={product.image}
				alt={product.image}
				h={64}
				w="full"
				objectFit="contain"
				mt={4}
			/>

			<Box p={4} textAlign="center">
				<Heading as="h3" size="md" mb={2}>
					{product.name}
				</Heading>
				<Text fontWeight="bold" fontSize="xl" mb={4}>
					$ {product.price}
				</Text>
				<HStack justifyContent="center" spacing={7}>
					<IconButton
						icon={<BiEditAlt />}
						colorScheme="blue"
						onClick={onOpen}
					/>
					<IconButton
						icon={<AiFillDelete />}
						colorScheme="red"
						onClick={() => handleDeleteProduct(product._id)}
					/>
				</HStack>
			</Box>

			<Modal isOpen={isOpen} onClose={onClose}>
				<ModalOverlay />

				<ModalContent>
					<ModalHeader>Update Product</ModalHeader>
					<ModalCloseButton />

					<ModalBody>
						<VStack spacing={5}>
							<Input
								placeholder="Update Product"
								name="name"
								value={updatedProduct.name}
								onChange={(e) =>
									setUpdatedProduct({ ...updatedProduct, name: e.target.name })
								}
							/>
							<Input
								placeholder="Update Price"
								name="price"
								type="number"
								value={updatedProduct.price}
								onChange={(e) =>
									setUpdatedProduct({
										...updatedProduct,
										price: e.target.price,
									})
								}
							/>
							<Input
								placeholder="Update Image URL"
								name="image"
								value={product.image}
								onChange={(e) =>
									setUpdatedProduct({
										...updatedProduct,
										image: e.target.image,
									})
								}
							/>
						</VStack>
					</ModalBody>

					<ModalFooter>
						<Button></Button>
						<Button></Button>
					</ModalFooter>
				</ModalContent>
			</Modal>
		</Box>
	);
};
export default ProductCard;

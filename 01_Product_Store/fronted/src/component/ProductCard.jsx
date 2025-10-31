import {
	Box,
	Image,
	Heading,
	Text,
	HStack,
	IconButton,
	useColorModeValue,
	useToast,
	Modal,
	useDisclosure,
	ModalCloseButton,
	ModalOverlay,
	ModalContent,
	ModalHeader,
	ModalFooter,
	VStack,
	Input,
	Button,
	ModalBody,
} from '@chakra-ui/react';
import { transform } from 'framer-motion';
import { MdEdit } from 'react-icons/md';
import { AiFillDelete } from 'react-icons/ai';
import { useProductStore } from '../store/product';
import { useState } from 'react';

const ProductCard = ({ product }) => {
	const [updatedProduct, setUpdateproduct] = useState(product);

	const textColor = useColorModeValue('gray.600', 'gray.200');
	const bg = useColorModeValue('white', 'gray.800');

	const { deleteProduct, updateProduct } = useProductStore();
	const toast = useToast();
	const { isOpen, onOpen, onClose } = useDisclosure();

	const handleDeleteProduct = async (pid) => {
		const { success, message } = await deleteProduct(pid);
		if (success) {
			toast({
				title: 'Success',
				description: message,
				status: 'success',
				duration: 3000,
				isClosable: true,
			});
		} else {
			toast({
				title: 'Error',
				description: message,
				status: 'error',
				duration: 3000,
				isClosable: true,
			});
		}
	};

	const handleUpdateProduct = async (pid, updatedProduct) => {
		await updateProduct(pid, updatedProduct);
		onClose();
	};

	return (
		<Box
			shadow={'lg'}
			rounded={'lg'}
			overflow={'hidden'}
			transition={'all 0.3s'}
			_hover={{ transform: 'translateY(-5px)', shadow: 'xl' }}
			bg={bg}>
			<Image
				src={product.image}
				alt={product.name}
				h={48}
				w="full"
				objectFit="cover"
			/>

			<Box p={4}>
				<Heading as={'h3'} size={'md'} mb={2}>
					{product.name}
				</Heading>

				<Text fontWeight={'bold'} fontSize={'xl'} mb={4}>
					${product.price}
				</Text>

				<HStack spacing={2}>
					<IconButton
						icon={<MdEdit />}
						colorScheme="blue"
						onClick={onOpen}></IconButton>
					<IconButton
						icon={<AiFillDelete />}
						onClick={() => handleDeleteProduct(product._id)}
						colorScheme="red"></IconButton>
				</HStack>
			</Box>

			<Modal isOpen={isOpen} onClose={onClose} isCentered>
				<ModalOverlay />

				<ModalContent>
					<ModalHeader>Update Product</ModalHeader>
					<ModalCloseButton />
					<ModalBody>
						<VStack spacing={4}>
							<Input
								placeholder="Product Name"
								name="name"
								value={updatedProduct.name}
							/>
							<Input
								placeholder="Product Name"
								name="name"
								value={updatedProduct.price}
							/>
							<Input
								placeholder="Product Name"
								name="name"
								value={updatedProduct.image}
							/>
						</VStack>
					</ModalBody>

					<ModalFooter>
						<Button
							colorScheme={'blue'}
							mr={3}
							onClick={() => handleDeleteProduct(product._id, updatedProduct)}>
							Update
						</Button>
						<Button variant="ghost" onClick={onClose}>
							Cancel
						</Button>
					</ModalFooter>
				</ModalContent>
			</Modal>
		</Box>
	);
};

export default ProductCard;

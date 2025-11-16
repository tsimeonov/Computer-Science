import {
	Box,
	Button,
	Heading,
	HStack,
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
		<Box>
			<Box>
				<Image src={product.image} />
				<Heading>{product.name}</Heading>
				<Text>{product.price}</Text>

				<HStack>
					<IconButton
						icon={<BiEditAlt />}
						onClick={onOpen}
						colorScheme="blue"></IconButton>
					<IconButton
						icon={<AiFillDelete />}
						onClick={() => handleDeleteProduct(product._id)}
						colorScheme="red"></IconButton>
				</HStack>
			</Box>
			<Modal></Modal>
		</Box>
	);
};
export default ProductCard;

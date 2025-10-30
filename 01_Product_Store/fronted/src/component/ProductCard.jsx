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
	VStack,
	Input,
} from '@chakra-ui/react';
import { transform } from 'framer-motion';
import { MdEdit } from 'react-icons/md';
import { AiFillDelete } from 'react-icons/ai';
import { useProductStore } from '../store/product';

const ProductCard = ({ product }) => {
	const textColor = useColorModeValue('gray.600', 'gray.200');
	const bg = useColorModeValue('white', 'gray.800');

	const { deleteProduct } = useProductStore();
	const toast = useToast();
	const { isOpen, onOpen, onClose } = useDisclosure();

	const handleDeleteProduct = async (pid) => {
		const { success, message } = await deleteProduct(pid);
		if (success) {
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
					<IconButton icon={<MdEdit />} colorScheme="blue"></IconButton>
					<IconButton
						icon={<AiFillDelete />}
						onClick={() => handleDeleteProduct(product._id)}
						colorScheme="red"></IconButton>
				</HStack>
			</Box>

			<Modal isOpen={isOpen} onClose={onClose}>
				<ModalOverlay />

				<ModalContent>
					<ModalHeader>Update Product</ModalHeader>
					<ModalCloseButton />
				</ModalContent>
			</Modal>
		</Box>
	);
};

export default ProductCard;

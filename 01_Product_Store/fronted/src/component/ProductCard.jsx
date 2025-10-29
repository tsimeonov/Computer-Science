import {
	Box,
	Image,
	Heading,
	Text,
	HStack,
	IconButton,
} from '@chakra-ui/react';
import { transform } from 'framer-motion';
import { MdEdit } from 'react-icons/md';
import { AiFillDelete } from 'react-icons/ai';

const ProductCard = ({ product }) => {
	return (
		<Box
			shadow={'lg'}
			rounded={'lg'}
			overflow={'hidden'}
			transition={'all 0.3s'}
			_hover={{ transform: 'translateY(-5px)', shadow: 'xl' }}>
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
					<IconButton icon={<AiFillDelete />} colorScheme="red"></IconButton>
				</HStack>
			</Box>
		</Box>
	);
};

export default ProductCard;

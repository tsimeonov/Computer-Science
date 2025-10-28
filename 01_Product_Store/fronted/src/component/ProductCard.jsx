import { Box } from '@chakra-ui/react';
import { transform } from 'framer-motion';

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
		</Box>
	);
};

export default ProductCard;

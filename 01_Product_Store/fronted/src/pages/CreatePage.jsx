import { Box, useColorModeValue, VStack } from '@chakra-ui/react';
import { Route, Routes } from 'react-router-dom';

const CreatePage = () => {
	const [newProduct, setNewProduct] = useState({
		name: '',
		price: '',
		image: '',
	});
	return (
		<Container maxW={'container.sm'}>
			<VStack spacing={8}></VStack>
		</Container>
	);
};

export default CreatePage;

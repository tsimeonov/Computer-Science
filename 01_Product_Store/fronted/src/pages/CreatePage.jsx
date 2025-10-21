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
			<VStack spacing={8}>
				<Heading
					as={'h1'}
					size={'2x1'}
					textAlign={'center'}
					mb={8}
					Create
					New
					Product></Heading>
			</VStack>
		</Container>
	);
};

export default CreatePage;

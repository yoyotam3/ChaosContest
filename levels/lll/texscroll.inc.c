void scroll_lll_dl_Plane_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 120;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_Plane_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll_dl_Plane_011_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 40;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_Plane_011_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll_dl_Plane_012_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 59;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_Plane_012_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll() {
	scroll_lll_dl_Plane_mesh_layer_1_vtx_0();
	scroll_lll_dl_Plane_011_mesh_layer_1_vtx_0();
	scroll_lll_dl_Plane_012_mesh_layer_1_vtx_0();
};

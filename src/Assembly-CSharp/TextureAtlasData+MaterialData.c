
/* TextureAtlasData+MaterialData(Color, Vector4, Vector4) */

void Assembly-CSharp.dll::TextureAtlasData+MaterialData::TextureAtlasData_MaterialData__ctor
               (TextureAtlasData_MaterialData *this,Color *colorData,Vector4 *emissiveData,
               Vector4 *animationData,MethodInfo *method)

{
  fVar1 = colorData->g;
  fVar2 = colorData->b;
  fVar3 = colorData->a;
  (this->fields).colorData.r = colorData->r;
  (this->fields).colorData.g = fVar1;
  (this->fields).colorData.b = fVar2;
  (this->fields).colorData.a = fVar3;
  fVar1 = emissiveData->y;
  fVar2 = emissiveData->z;
  fVar3 = emissiveData->w;
  (this->fields).emissiveData.x = emissiveData->x;
  (this->fields).emissiveData.y = fVar1;
  (this->fields).emissiveData.z = fVar2;
  (this->fields).emissiveData.w = fVar3;
  fVar1 = animationData->y;
  fVar2 = animationData->z;
  fVar3 = animationData->w;
  (this->fields).animationData.x = animationData->x;
  (this->fields).animationData.y = fVar1;
  (this->fields).animationData.z = fVar2;
  (this->fields).animationData.w = fVar3;
  return;
}


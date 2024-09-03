
/* TextureAtlasData+MaterialData(Color, Vector4, Vector4) */

void Assembly-CSharp.dll::TextureAtlasData+MaterialData::TextureAtlasData_MaterialData__ctor
               (TextureAtlasData_MaterialData *this,Color colorData,Vector4 emissiveData,
               Vector4 animationData,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).colorData.r = colorData.r;
  (this->fields).colorData.g = colorData.g;
  (this->fields).colorData.b = colorData.b;
  (this->fields).colorData.a = colorData.a;
  (this->fields).emissiveData.x = emissiveData.x;
  (this->fields).emissiveData.y = emissiveData.y;
  (this->fields).emissiveData.z = emissiveData.z;
  (this->fields).emissiveData.w = emissiveData.w;
  (this->fields).animationData.x = animationData.x;
  (this->fields).animationData.y = animationData.y;
  (this->fields).animationData.z = animationData.z;
  (this->fields).animationData.w = animationData.w;
  return;
}


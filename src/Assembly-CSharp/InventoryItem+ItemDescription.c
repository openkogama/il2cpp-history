
/* InventoryItem+ItemDescription(String, String, String) */

void Assembly-CSharp.dll::InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
               (InventoryItem_ItemDescription *this,String *name,String *explanation,
               String *inspirational,MethodInfo *method)

{
  pIStack_1 = (InvokerMethod)0x0;
  method_00 = (MethodInfo *)&uStack_2;
  uStack_2._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_2._4_4_ = (Il2CppMethodPointer)0x0;
  func_?(method_00,0,0,0,0);
  (this->fields).cameraPreviewerOffset.x = (float)(Il2CppMethodPointer)uStack_2;
  (this->fields).cameraPreviewerOffset.y = (float)uStack_2._4_4_;
  (this->fields).cameraPreviewerOffset.z = (float)pIStack_1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  (this->fields).name = name;
  (this->fields).explanation = explanation;
  (this->fields).inspirational = inspirational;
  return;
}


/* InventoryItem+ItemDescription(String, String, String, Vector3) */

void Assembly-CSharp.dll::InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
               (InventoryItem_ItemDescription *this,String *name,String *explanation,
               String *inspirational,Vector3 cameraPreviewerOffset,MethodInfo *method)

{
  pIStack_1 = (InvokerMethod)0x0;
  method_00 = (MethodInfo *)&uStack_2;
  uStack_2._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_2._4_4_ = (Il2CppMethodPointer)0x0;
  func_?(method_00,0,0,0,0);
  (this->fields).cameraPreviewerOffset.x = (float)(Il2CppMethodPointer)uStack_2;
  (this->fields).cameraPreviewerOffset.y = (float)uStack_2._4_4_;
  (this->fields).cameraPreviewerOffset.z = (float)pIStack_1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  (this->fields).name = name;
  (this->fields).explanation = explanation;
  (this->fields).inspirational = inspirational;
  (this->fields).cameraPreviewerOffset.x = cameraPreviewerOffset.x;
  (this->fields).cameraPreviewerOffset.y = cameraPreviewerOffset.y;
  (this->fields).cameraPreviewerOffset.z = cameraPreviewerOffset.z;
  return;
}


/* Vector3 get_CameraPreviewerOffset() */

Vector3 * Assembly-CSharp.dll::InventoryItem+ItemDescription::
          InventoryItem_ItemDescription_get_CameraPreviewerOffset
                    (Vector3 *__return_storage_ptr__,InventoryItem_ItemDescription *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields).cameraPreviewerOffset.y;
  fVar2 = (this->fields).cameraPreviewerOffset.z;
  __return_storage_ptr__->x = (this->fields).cameraPreviewerOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* String get_Description() */

String * Assembly-CSharp.dll::InventoryItem+ItemDescription::
         InventoryItem_ItemDescription_get_Description
                   (InventoryItem_ItemDescription *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).explanation;
  str2 = (this->fields).inspirational;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_u000Au000A,str2,(MethodInfo *)0x0);
  return pSVar1;
}


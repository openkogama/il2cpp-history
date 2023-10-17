
/* InventoryItem+ItemDescription(String, String, String) */

void Assembly-CSharp.dll::InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
               (InventoryItem_ItemDescription *this,String *name,String *explanation,
               String *inspirational,MethodInfo *method)

{
  (this->fields).cameraPreviewerOffset.x = 0.0;
  (this->fields).cameraPreviewerOffset.y = 0.0;
  (this->fields).cameraPreviewerOffset.z = 0.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).name = name;
  func_?(&this->fields,name);
  (this->fields).explanation = explanation;
  func_?(&(this->fields).explanation,explanation);
  (this->fields).inspirational = inspirational;
  func_?(&(this->fields).inspirational,inspirational);
  return;
}


/* InventoryItem+ItemDescription(String, String, String, Vector3) */

void Assembly-CSharp.dll::InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
               (InventoryItem_ItemDescription *this,String *name,String *explanation,
               String *inspirational,Vector3 cameraPreviewerOffset,MethodInfo *method)

{
  (this->fields).cameraPreviewerOffset.x = 0.0;
  (this->fields).cameraPreviewerOffset.y = 0.0;
  (this->fields).cameraPreviewerOffset.z = 0.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).name = name;
  func_?(&this->fields,name);
  (this->fields).explanation = explanation;
  func_?(&(this->fields).explanation,explanation);
  (this->fields).inspirational = inspirational;
  func_?(&(this->fields).inspirational,inspirational);
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
    func_?(&StringLiteral_u000Au000A);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     ((this->fields).explanation,StringLiteral_u000Au000A,
                      (this->fields).inspirational,(MethodInfo *)0x0);
  return pSVar1;
}


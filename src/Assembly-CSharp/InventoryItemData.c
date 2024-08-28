
/* InventoryItemData(Int32, Int32, Int32, String) */

void Assembly-CSharp.dll::InventoryItemData::InventoryItemData__ctor
               (InventoryItemData *this,int32_t id,int32_t slotIndex,int32_t categoryId,String *name
               ,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppSVar1 = &(this->fields).name;
  (this->fields).slotIndex = slotIndex;
  (this->fields).categoryId = categoryId;
  *ppSVar1 = name;
  func_?(ppSVar1,name);
  (this->fields).id = id;
  return;
}


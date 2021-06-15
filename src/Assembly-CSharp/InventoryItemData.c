
/* InventoryItemData(Int32, Int32, Int32, String) */

void Assembly-CSharp.dll::InventoryItemData::InventoryItemData__ctor
               (InventoryItemData *this,int32_t id,int32_t slotIndex,int32_t categoryId,String *name
               ,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).slotIndex = slotIndex;
  (this->fields).categoryId = categoryId;
  (this->fields).name = name;
  (this->fields).id = id;
  return;
}


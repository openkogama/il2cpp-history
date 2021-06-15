
/* Object <>m__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         CollectionUtils+<TryGetSingleItem>c__AnonStorey0`1[System::Object]::
         CollectionUtils_TryGetSingleItem_c_AnonStorey0_1_System_Object____m__0
                   (CollectionUtils_TryGetSingleItem_c_AnonStorey0_1_System_Object_ *this,
                   MethodInfo *method)

{
  pCVar1 = &this->fields;
  this = (CollectionUtils_TryGetSingleItem_c_AnonStorey0_1_System_Object_ *)
         (uint)(this->fields).returnDefaultIfEmpty;
  pOVar2 = (Object *)
           (**(code **)**(undefined4 **)(method->name + 0x60))
                     (pCVar1->list,this,(undefined4 *)**(undefined4 **)(method->name + 0x60));
  return pOVar2;
}


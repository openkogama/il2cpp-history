
/* Object <TryGetSingleItem>b__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         CollectionUtils+<>c__DisplayClass16_0`1[System::Object]::
         CollectionUtils_c_DisplayClass16_0_1_System_Object___TryGetSingleItem_b__0
                   (CollectionUtils_c_DisplayClass16_0_1_System_Object_ *this,MethodInfo *method)

{
  pCVar1 = &this->fields;
  this = (CollectionUtils_c_DisplayClass16_0_1_System_Object_ *)
         CONCAT31(this._1_3_,(this->fields).returnDefaultIfEmpty);
  pOVar2 = (Object *)
           (*method->klass->rgctx_data->method->virtualMethodPointer)
                     (pCVar1->list,this,method->klass->rgctx_data->rgctxDataDummy);
  return pOVar2;
}


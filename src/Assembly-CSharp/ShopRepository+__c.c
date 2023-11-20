
/* Int32 <GetItemsByItemCategories>b__8_1(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

int32_t Assembly-CSharp.dll::ShopRepository+<>c::ShopRepository_c__GetItemsByItemCategories_b__8_1
                  (ShopRepository_c *this,KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ pair,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Key__
                   );
    cRam_? = '\x01';
  }
  return pair.key;
}


/* MVItem <GetItemsByItemCategories>b__8_2(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

MVItem * Assembly-CSharp.dll::ShopRepository+<>c::ShopRepository_c__GetItemsByItemCategories_b__8_2
                   (ShopRepository_c *this,KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ pair,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                   );
    cRam_? = '\x01';
  }
  return pair.value;
}


/* ShopRepository+<>c() */

void Assembly-CSharp.dll::ShopRepository+<>c::ShopRepository_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ShopRepository____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ShopRepository____c;
  value = (ShopRepository_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ShopRepository____c->static_fields->__9 = value;
  func_?(TypeInfo__ShopRepository____c->static_fields,value);
  return;
}


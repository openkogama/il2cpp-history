
/* Int32 <GetItemsByItemCategory>b__5_1(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

int32_t Assembly-CSharp.dll::PlayerRepository+<>c::PlayerRepository_c__GetItemsByItemCategory_b__5_1
                  (PlayerRepository_c *this,KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ pair,
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


/* MVItem <GetItemsByItemCategory>b__5_2(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

MVItem * Assembly-CSharp.dll::PlayerRepository+<>c::
         PlayerRepository_c__GetItemsByItemCategory_b__5_2
                   (PlayerRepository_c *this,KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ pair
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                   );
    cRam_? = '\x01';
  }
  return pair.value;
}


/* PlayerRepository+<>c() */

void Assembly-CSharp.dll::PlayerRepository+<>c::PlayerRepository_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerRepository____c);
    cRam_? = '\x01';
  }
  value = (PlayerRepository_c *)func_?(TypeInfo__PlayerRepository____c);
  if (value != (PlayerRepository_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__PlayerRepository____c->static_fields->__9 = value;
    func_?(TypeInfo__PlayerRepository____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


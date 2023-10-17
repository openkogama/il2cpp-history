
/* Int32 <Initialize>b__23_0(KeyValuePair`2[System.Int32,System.Int32]) */

int32_t Assembly-CSharp.dll::LevelRewardAnimation+<>c::LevelRewardAnimation_c__Initialize_b__23_0
                  (LevelRewardAnimation_c *this,KeyValuePair_2_System_Int32_System_Int32_ o,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    cRam_? = '\x01';
  }
  return o.key;
}


/* Void <OnShow>b__24_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LevelRewardAnimation+<>c::LevelRewardAnimation_c__OnShow_b__24_0
               (LevelRewardAnimation_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LevelRewardAnimation+<>c() */

void Assembly-CSharp.dll::LevelRewardAnimation+<>c::LevelRewardAnimation_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelRewardAnimation____c);
    cRam_? = '\x01';
  }
  value = (LevelRewardAnimation_c *)func_?(TypeInfo__LevelRewardAnimation____c);
  if (value != (LevelRewardAnimation_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__LevelRewardAnimation____c->static_fields->__9 = value;
    func_?(TypeInfo__LevelRewardAnimation____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


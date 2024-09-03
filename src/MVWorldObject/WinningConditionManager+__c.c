
/* Boolean <Reset>b__21_0(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c::WinningConditionManager_c__Reset_b__21_0
               (WinningConditionManager_c *this,IWinningCondition *winnerCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IWinningCondition *)&TypeInfo__IWinningCondition;
    func_?();
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    pIStack_1 = winnerCondition;
    pIStack_2 = TypeInfo__IWinningCondition;
    uStack_3 = 5;
    func_?();
    return 0;
  }
  pIStack_1 = (IWinningCondition *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* WinningConditionManager+<>c() */

void MVWorldObject.dll::WinningConditionManager+<>c::WinningConditionManager_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionManager____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionManager____c;
  value = (WinningConditionManager_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__WinningConditionManager____c->static_fields->__9 = value;
  func_?(TypeInfo__WinningConditionManager____c->static_fields,value);
  return;
}


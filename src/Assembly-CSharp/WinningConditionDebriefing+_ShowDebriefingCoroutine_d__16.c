
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_MoveNext
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    func_?(&MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_
                   );
    func_?(&MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = (Object__Class *)(this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if (((this_01 != (Object__Class *)0x0) &&
        (pIVar1 = (this_01->_0).castClass, pIVar1 != (Il2CppClass *)0x0)) &&
       (piVar2 = *(int **)&(pIVar1->byval_arg).attrs, piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x318))(piVar2,::StringLiteral__,*(undefined4 *)(*piVar2 + 0x31c));
      this_02 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_0_float_,
                 (MethodInfo *)0x0);
      pIVar3 = pTween::pTween_To(0.3,0.0,1.0,(Action_1_Single_ *)this_02,(MethodInfo *)0x0);
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_01,pIVar3,(MethodInfo *)0x0);
      ppOVar5 = &(this->fields).__2__current;
      *ppOVar5 = (Object *)pCVar4;
      func_?(ppOVar5,pCVar4);
      (this->fields).__1__state = 1;
      return 1;
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_01 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
        cRam_? = '\x01';
      }
      method_02 = TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19;
      pOVar6 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
      pOVar6[1].klass = (Object__Class *)0x0;
      pOVar6[2].klass = this_01;
      func_?(pOVar6 + 2,this_01);
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_01,(IEnumerator *)pOVar6,(MethodInfo *)0x0);
      ppOVar5 = &(this->fields).__2__current;
      *ppOVar5 = (Object *)pCVar4;
      func_?(ppOVar5,pCVar4);
      (this->fields).__1__state = 2;
      return 1;
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    unaff_ESI = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (unaff_ESI,(Object *)this_01,
               MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_b__16_1_float_,
               (MethodInfo *)0x0);
    pIVar3 = pTween::pTween_To(0.3,1.0,0.0,(Action_1_Single_ *)unaff_ESI,(MethodInfo *)0x0);
    if (this_01 != (Object__Class *)0x0) {
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_01,pIVar3,(MethodInfo *)0x0);
      ppOVar5 = &(this->fields).__2__current;
      *ppOVar5 = (Object *)pCVar4;
      func_?(ppOVar5,pCVar4);
      (this->fields).__1__state = 3;
      return 1;
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  func_?();
  bVar7 = (byte)((ushort)extraout_CX >> 8);
  bVar8 = (byte)this_01;
  bVar9 = CARRY1(bVar7,bVar8) || CARRY1(bVar7 + bVar8,bVar7 < in_stack_10);
  this_00 = &this->monitor;
  pWVar11 = (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16__Class *)in(extraout_DX);
  this->klass = pWVar11;
  pbVar12 = (byte *)((int)&this[5].fields.__2__current + 2);
  bVar7 = *pbVar12;
  bVar13 = (byte)extraout_DX;
  bVar14 = *pbVar12;
  *pbVar12 = bVar14 + bVar13 + bVar9;
  out(*(undefined1 *)&unaff_ESI->klass,extraout_DX);
  pcVar15 = (char *)((int)&unaff_ESI[1].fields._._.interp_invoke_impl + 1);
  *pcVar15 = *pcVar15 + bVar13 +
            (CARRY1(extraout_AH,(byte)extraout_CX) ||
            CARRY1(extraout_AH + (byte)extraout_CX,
                   CARRY1(bVar7,bVar13) || CARRY1(bVar14 + bVar13,bVar9)));
  if (-1 < *pcVar15) {
    uVar16 = func_?();
    this_03 = (NotSupportedException *)func_?(uVar16);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_03,(MethodInfo *)0x0);
    uVar16 = func_?(&
                            MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16__System_Collections_IEnumerator_Reset__
                           );
    func_?(this_03,uVar16);
    pcVar17 = (code *)swi(3);
    bVar18 = (*pcVar17)();
    return bVar18;
  }
  bVar7 = 0;
  if (this_00 == (MonitorData **)0x0) {
    uVar19 = func_?();
    out(*(undefined4 *)((int)&unaff_ESI->klass + 2),(short)((uint6)uVar19 >> 0x20));
    bVar9 = CARRY1(in_stack_20,bVar8 - 4) || CARRY1(in_stack_20 + (bVar8 - 4),bVar7)
    ;
    pbVar12 = (byte *)((int)uVar19 + 0x4b + (int)((int)&unaff_ESI->monitor + 2) * 2);
    bVar7 = *pbVar12 + (bVar8 - 5);
    bVar21 = CARRY1(*pbVar12,bVar8 - 5) || CARRY1(bVar7,bVar9);
    *pbVar12 = bVar7 + bVar9;
    puVar22 = &this_01[-0x128b4c]._1.field_0x57;
    bVar14 = (byte)((uint6)uVar19 >> 0x28);
    cVar23 = *puVar22;
    bVar7 = *puVar22 + bVar14;
    uVar24 = CARRY1(*puVar22,bVar14) || CARRY1(bVar7,bVar21);
    *puVar22 = bVar7 + bVar21;
    if (SCARRY1(cVar23,bVar14) == SCARRY1(bVar7,bVar21)) {
      pcVar17 = (code *)swi(3);
      bVar18 = (*pcVar17)();
      return bVar18;
    }
    pcVar17 = (code *)swi(4);
    pWVar11 = (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16__Class *)(*pcVar17)();
    puVar22 = (undefined1 *)((int)&this_01[0x6b7e0]._0.klass + 3);
    iVar25 = *(int *)puVar22;
    *(int *)puVar22 = *(int *)puVar22 + 1;
    iVar26 = *(int *)puVar22;
    pOVar6 = *(Object **)puVar22;
    pbVar12 = (byte *)((int)&extraout_ECX[0xae02237].klass + 3);
    bVar7 = *pbVar12;
    *pbVar12 = bVar7 << 2 | (byte)(CONCAT11(uVar24,bVar7) >> 7);
    pOVar27 = extraout_ECX;
    if (SCARRY4(iVar25,1) != iVar26 < 0) {
      pOVar27 = (this->fields).__2__current;
      pWVar11 = this[1].klass;
      pOVar6 = pOVar27;
    }
    if (pOVar6 != (Object *)0x0) {
      if (pOVar27 == (Object *)0x1) {
        (this->fields).__2__current = (Object *)0xffffffff;
        if (pWVar11 == (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16__Class *)0x0) {
          func_?();
          pcVar17 = (code *)swi(3);
          bVar18 = (*pcVar17)();
          return bVar18;
        }
        (pWVar11->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)0x0;
        (pWVar11->_0).interopData = (Il2CppInteropData *)0x0;
        (pWVar11->_0).klass = (Il2CppClass *)0x0;
        (pWVar11->_0).fields = (FieldInfo *)0x0;
        (pWVar11->_0).events = (EventInfo *)0x0;
      }
      return 0;
    }
    (this->fields).__2__current = (Object *)0xffffffff;
    this_04 = (WinningConditionDebriefing *)func_?();
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
              ((SubscribableVariable_1_System_Single_ *)this_04,3.0,(MethodInfo *)0x0);
    (this->fields).__4__this = this_04;
    func_?();
    (this->fields).__2__current = (Object *)0x1;
    return 1;
  }
  if (in_XMM0_Da < _UNK_?) {
    uVar16 = this[2].fields.__1__state;
    method_00 = this[2].fields.__2__current;
    to.x = (float)this[1].klass;
    to.y = (float)this[1].monitor;
    from.y = (float)method_00;
    from.x = in_XMM1_Da;
    GameMeterVisuals::SlideOnClick::SlideOnClick_LerpToPos
              ((SlideOnClick *)this_00,from,to,in_XMM1_Da,(MethodInfo *)method_00);
    puVar28 = (undefined4 *)((int)&(unaff_ESI->fields)._._.invoke_impl + 2);
    *puVar28 = 0;
    func_?(puVar28,0,uVar16);
    *(undefined4 *)((int)&(unaff_ESI->fields)._._.method_ptr + 2) = 1;
    return 1;
  }
  method_01 = this[1].monitor;
  pos_00.y = (float)method_01;
  pos_00.x = (float)method_01;
  GameMeterVisuals::SlideOnClick::SlideOnClick_SetToPosition
            ((SlideOnClick *)this_00,pos_00,(MethodInfo *)method_01);
  *(undefined4 *)((int)&(unaff_ESI->fields)._._.method + 2) = 0;
  pfVar29 = (float *)((int)&(unaff_ESI->fields)._._.method + 2);
  if (*pfVar29 <= (float)this[2].klass && (float)this[2].klass != *pfVar29) {
    puVar28 = (undefined4 *)((int)&(unaff_ESI->fields)._._.invoke_impl + 2);
    *puVar28 = 0;
    func_?(puVar28,0);
    *(undefined4 *)((int)&(unaff_ESI->fields)._._.method_ptr + 2) = 2;
    return 1;
  }
  if (*(char *)((int)&this[3].klass + 1) != '\0') {
    puVar28 = (undefined4 *)((int)&(unaff_ESI->fields)._._.invoke_impl + 2);
    *puVar28 = 0;
    func_?(puVar28,0);
    *(undefined4 *)((int)&(unaff_ESI->fields)._._.method_ptr + 2) = 3;
    return 1;
  }
  *(undefined4 *)((int)&(unaff_ESI->fields)._._.method + 2) = 0;
  if (_UNK_? <= 0.0) {
    pos.x = (float)this[2].fields.__1__state;
    pos.y = (float)this[2].fields.__2__current;
    GameMeterVisuals::SlideOnClick::SlideOnClick_SetToPosition
              ((SlideOnClick *)this_00,pos,(MethodInfo *)0x0);
    *(undefined1 *)&this[3].klass = 1;
    return 0;
  }
  to_00.x = (float)this[2].fields.__1__state;
  to_00.y = (float)this[2].fields.__2__current;
  GameMeterVisuals::SlideOnClick::SlideOnClick_LerpToPos
            ((SlideOnClick *)this_00,(Vector2)((ulonglong)to_00 >> 0x20),to_00,0.0,(MethodInfo *)0x0
            );
  puVar28 = (undefined4 *)((int)&(unaff_ESI->fields)._._.invoke_impl + 2);
  *puVar28 = 0;
  func_?(puVar28,0);
  *(undefined4 *)((int)&(unaff_ESI->fields)._._.method_ptr + 2) = 4;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<ShowDebriefingCoroutine>d__16::
     WinningConditionDebriefing_ShowDebriefingCoroutine_d_16_System_Collections_IEnumerator_Reset
               (WinningConditionDebriefing_ShowDebriefingCoroutine_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


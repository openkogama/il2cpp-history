
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  method_00 = unaff_EBX;
  if (cRam_? == '\0') {
    in_stack_1 = &TypeInfo__System__Int32;
    func_?();
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    pRVar3 = (RectTransform *)(this->fields)._i_5__2;
    in_XMM0_Db = 0.0;
    in_stack_1 = (Int32__Class **)0x0;
    (this->fields).__1__state = -1;
    in_XMM0_Da = pRVar3;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar4 + (float)pRVar3;
    break;
  case 2:
    pRVar3 = (RectTransform *)(this->fields)._i_5__2;
    in_XMM0_Db = 0.0;
    in_stack_1 = (Int32__Class **)0x0;
    (this->fields).__1__state = -1;
    in_XMM0_Da = pRVar3;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar4 + (float)pRVar3;
    if (pGVar2 != (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (pGVar2 != (GameMeterUpdatedEffect *)0x0) {
    in_XMM0_Da = (RectTransform *)(pGVar2->fields).scaleTime;
    in_XMM0_Db = 0.0;
    pfVar5 = &(this->fields)._i_5__2;
    pRVar3 = (pGVar2->fields).scaleTarget;
    if ((float)in_XMM0_Da < *pfVar5 || (float)in_XMM0_Da == *pfVar5) {
      if (pRVar3 != (RectTransform *)0x0) {
        unaff_EBX = (MethodInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar3,(MethodInfo *)0x0);
        uStack_6._0_4_ = (pGVar2->fields).startSize.x;
        uStack_6._4_4_ = (pGVar2->fields).startSize.y;
        pRStack_7 = (RectTransform *)(pGVar2->fields).startSize.z;
        in_stack_1 = (Int32__Class **)0x0;
        puVar8 = (undefined8 *)func_?(&VStack_9);
        fVar4 = (pGVar2->fields).scaleStrength;
        uStack_10._0_4_ = (float)*puVar8;
        uStack_10._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
        fVar11 = (float)uStack_6 + (float)uStack_10 * fVar4;
        fVar12 = uStack_6._4_4_ + uStack_10._4_4_ * fVar4;
        uStack_10 = CONCAT44(fVar12,fVar11);
        in_XMM0_Da = (RectTransform *)((float)pRStack_7 + *(float *)(puVar8 + 1) * fVar4);
        in_XMM0_Db = 0.0;
        pRStack_13 = in_XMM0_Da;
        if (unaff_EBX != (MethodInfo *)0x0) {
          value_00.y = fVar12;
          value_00.x = fVar11;
          value_00.z = (float)in_XMM0_Da;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    ((Transform *)unaff_EBX,value_00,(MethodInfo *)0x0);
          (this->fields)._i_5__2 = 0.0;
          in_stack_1 = (Int32__Class **)in_XMM0_Da;
code_?:
          in_XMM0_Da = (RectTransform *)(pGVar2->fields).scaleTime;
          in_XMM0_Db = 0.0;
          pfVar5 = &(this->fields)._i_5__2;
          pRVar3 = (pGVar2->fields).scaleTarget;
          if ((float)in_XMM0_Da < *pfVar5 || (float)in_XMM0_Da == *pfVar5) {
            if (pRVar3 != (RectTransform *)0x0) {
              puVar14 = (undefined *)0x0;
              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar3,(MethodInfo *)0x0);
              in_stack_1 = (Int32__Class **)pRVar3;
              if (pTVar15 != (Transform *)0x0) {
                in_XMM0_Da = (RectTransform *)(pGVar2->fields).startSize.x;
                in_XMM0_Db = (pGVar2->fields).startSize.y;
                fVar4 = (pGVar2->fields).startSize.z;
                method_00 = (MethodInfo *)0x0;
                bVar16 = &stack0xffffffd4 < (undefined1 *)0xc;
                pfVar5 = (float *)&stack0xffffffc8;
                goto code_?;
              }
            }
          }
          else if ((pRVar3 != (RectTransform *)0x0) &&
                  (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pRVar3,(MethodInfo *)0x0),
                  in_stack_1 = (Int32__Class **)pRVar3, pTVar15 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_9,pTVar15,(MethodInfo *)0x0);
            pOVar17 = (Object *)func_?();
            (this->fields).__2__current = pOVar17;
            func_?();
            (this->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar3 != (RectTransform *)0x0) {
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar3,(MethodInfo *)0x0);
      uStack_10._0_4_ = (pGVar2->fields).startSize.x;
      uStack_10._4_4_ = (pGVar2->fields).startSize.y;
      pRStack_13 = (RectTransform *)(pGVar2->fields).startSize.z;
      in_stack_1 = (Int32__Class **)0x0;
      puVar8 = (undefined8 *)func_?(&VStack_9);
      uStack_6._0_4_ = (float)*puVar8;
      fVar4 = ((this->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_6._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
      fVar11 = (float)uStack_10 + (float)uStack_6 * fVar4;
      fVar12 = uStack_10._4_4_ + uStack_6._4_4_ * fVar4;
      uStack_6 = CONCAT44(fVar12,fVar11);
      in_XMM0_Da = (RectTransform *)((float)pRStack_13 + *(float *)(puVar8 + 1) * fVar4);
      in_XMM0_Db = 0.0;
      unaff_EBX = (MethodInfo *)0x0;
      pRStack_7 = in_XMM0_Da;
      if (pTVar15 != (Transform *)0x0) {
        value.y = fVar12;
        value.x = fVar11;
        value.z = (float)in_XMM0_Da;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar15,value,(MethodInfo *)0x0);
        pOVar17 = (Object *)func_?();
        (this->fields).__2__current = pOVar17;
        func_?(&(this->fields).__2__current,pOVar17);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar18 = 0;
  puVar14 = &UNK_?;
  uVar19 = func_?();
  pTVar15 = (Transform *)((ulonglong)uVar19 >> 0x20);
  piVar20 = (int *)((int)extraout_ECX * 3 + 0x498d0f10);
  *piVar20 = *piVar20 + -1;
  bVar21 = (byte)((ulonglong)uVar19 >> 0x28);
  bVar22 = (byte)uVar19 + bVar21;
  bVar16 = CARRY1((byte)uVar19,bVar21) || CARRY1(bVar22,bVar18);
  fVar4 = (float)CONCAT31((int3)((ulonglong)uVar19 >> 8),bVar22 + bVar18);
  pfVar5 = extraout_ECX;
  pRVar3 = (RectTransform *)in_stack_1;
code_?:
  fVar4 = (float)(CONCAT31((int3)((uint)fVar4 >> 8),(SUB41(fVar4,0) + 'u') - bVar16) & 0xffffff6a
                  );
  *(char *)&unaff_EBX[-0x1126fbc].slot = (char)unaff_EBX[-0x1126fbc].slot + SUB41(fVar4,0);
  *pfVar5 = (float)in_XMM0_Da;
  pfVar5[1] = in_XMM0_Db;
  pfVar5[2] = fVar4;
  value_01.y = (float)puVar14;
  value_01.x = (float)pRVar3;
  value_01.z = unaff_ESI;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            (pTVar15,value_01,method_00);
  pOVar17 = (Object *)func_?();
  (this->fields).__2__current = pOVar17;
  func_?();
  (this->fields).__1__state = 3;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_System_Collections_IEnumerator_Reset
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


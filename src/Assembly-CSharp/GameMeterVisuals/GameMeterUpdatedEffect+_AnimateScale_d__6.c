
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  this_00 = unaff_EBX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  pGVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    break;
  case 2:
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (pGVar2 != (GameMeterUpdatedEffect *)0x0) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar4 = &(pGVar1->fields)._i_5__2;
    pRVar5 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
      if (pRVar5 != (RectTransform *)0x0) {
        unaff_EBX = (NotSupportedException *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar5,(MethodInfo *)0x0);
        uStack_6._0_4_ = (pGVar2->fields).startSize.x;
        uStack_6._4_4_ = (pGVar2->fields).startSize.y;
        fStack_7 = (pGVar2->fields).startSize.z;
        puVar8 = (undefined8 *)func_?(&stack0xffffffd8,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_9._0_4_ = (float)*puVar8;
        uStack_9._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
        fVar10 = (float)uStack_6 + (float)uStack_9 * fVar3;
        fStack_11 = fStack_7 + *(float *)(puVar8 + 1) * fVar3;
        fVar3 = uStack_6._4_4_ + uStack_9._4_4_ * fVar3;
        uStack_9 = CONCAT44(fVar3,fVar10);
        if (unaff_EBX != (NotSupportedException *)0x0) {
          value_00.y = fVar3;
          value_00.x = fVar10;
          value_00.z = fStack_11;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    ((Transform *)unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar4 = &(pGVar1->fields)._i_5__2;
          pRVar5 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
            if ((pRVar5 != (RectTransform *)0x0) &&
               (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
               pTVar12 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar12,(pGVar2->fields).startSize,(MethodInfo *)0x0);
              this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
              pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
              (pGVar1->fields).__2__current = pOVar13;
              func_?(&(pGVar1->fields).__2__current,pOVar13);
              (pGVar1->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar5 != (RectTransform *)0x0) &&
                  (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
                  pTVar12 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      ((Vector3 *)&stack0xffffffd8,pTVar12,(MethodInfo *)0x0);
            this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
            pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pGVar1->fields).__2__current = pOVar13;
            func_?(&(pGVar1->fields).__2__current,pOVar13);
            (pGVar1->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_9._0_4_ = (pGVar2->fields).startSize.x;
      uStack_9._4_4_ = (pGVar2->fields).startSize.y;
      fStack_11 = (pGVar2->fields).startSize.z;
      puVar8 = (undefined8 *)func_?(&stack0xffffffd8,0);
      uVar14 = *puVar8;
      fStack_7 = *(float *)(puVar8 + 1);
      uStack_6._0_4_ = (float)uVar14;
      fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_6._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
      fVar10 = (float)uStack_9 + (float)uStack_6 * fVar3;
      fStack_11 = fStack_11 + fStack_7 * fVar3;
      uStack_9._4_4_ = uStack_9._4_4_ + uStack_6._4_4_ * fVar3;
      uStack_9 = CONCAT44(uStack_9._4_4_,fVar10);
      unaff_EBX = (NotSupportedException *)0x0;
      uStack_6 = uVar14;
      if (pTVar12 != (Transform *)0x0) {
        value.y = uStack_9._4_4_;
        value.x = fVar10;
        value.z = fStack_11;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar12,value,(MethodInfo *)0x0);
        this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
        pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pGVar1->fields).__2__current = pOVar13;
        func_?(&(pGVar1->fields).__2__current,pOVar13);
        (pGVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar15 = 0;
  uVar16 = func_?();
  out(pGVar1->klass,(short)((uint6)uVar16 >> 0x20));
  pbVar17 = (byte *)((int)&(pGVar2->fields).startSize.x + 3);
  bVar18 = (byte)((uint)unaff_EBX >> 8);
  bVar19 = *pbVar17 + bVar18;
  bVar20 = CARRY1(*pbVar17,bVar18) || CARRY1(bVar19,bVar15);
  *pbVar17 = bVar19 + bVar15;
  pbVar17 = (byte *)((int)uVar16 + 0x21);
  bVar18 = (byte)((uint6)uVar16 >> 8);
  bVar19 = *pbVar17 + bVar18;
  bVar21 = CARRY1(*pbVar17,bVar18) || CARRY1(bVar19,bVar20);
  *pbVar17 = bVar19 + bVar20;
  pbVar17 = (byte *)((int)&(unaff_EBX->fields)._._._stackTraceString + 2);
  bVar19 = *pbVar17 + (byte)unaff_EBX;
  bVar20 = CARRY1(*pbVar17,(byte)unaff_EBX) || CARRY1(bVar19,bVar21);
  *pbVar17 = bVar19 + bVar21;
  ppOVar22 = &pGVar1[4].fields.__2__current;
  bVar19 = *(byte *)ppOVar22;
  bVar15 = (byte)((uint6)uVar16 >> 0x20);
  bVar18 = *(char *)ppOVar22 + bVar15;
  *(byte *)ppOVar22 = bVar18 + bVar20;
  (**(code **)((int)&uStack_9 +
              (uint)(CARRY1(bVar19,bVar15) || CARRY1(bVar18,bVar20)) + extraout_ECX))();
  piVar23 = &unaff_EBX[0x131c898].fields._._._HResult;
  *piVar23 = *piVar23 + -1;
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,in_stack_24);
  uVar25 = func_?();
  uStack_9 = CONCAT44(uVar25,&pGVar1->monitor);
  func_?();
  pcVar26 = (code *)swi(3);
  bVar27 = (*pcVar26)();
  return bVar27;
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


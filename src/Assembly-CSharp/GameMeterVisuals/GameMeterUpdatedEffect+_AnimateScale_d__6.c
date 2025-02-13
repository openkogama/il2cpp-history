
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
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
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar5,(MethodInfo *)0x0);
        uVar6 = (pGVar2->fields).startSize.x;
        uVar7 = (pGVar2->fields).startSize.y;
        fVar8 = (pGVar2->fields).startSize.z;
        puVar9 = (undefined8 *)func_?(&stack0xffffffd8,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        fStack_10 = (float)*puVar9;
        fStack_11 = (float)((ulonglong)*puVar9 >> 0x20);
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = (float)uVar7 + fStack_11 * fVar3;
          value_00.x = (float)uVar6 + fStack_10 * fVar3;
          value_00.z = fVar8 + *(float *)(puVar9 + 1) * fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
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
      uVar14 = (pGVar2->fields).startSize.x;
      uVar15 = (pGVar2->fields).startSize.y;
      fVar3 = (pGVar2->fields).startSize.z;
      puVar9 = (undefined8 *)func_?(&stack0xffffffd8,0);
      fStack_16 = (float)*puVar9;
      fVar8 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      fStack_17 = (float)((ulonglong)*puVar9 >> 0x20);
      unaff_EBX = (Transform *)0x0;
      if (pTVar12 != (Transform *)0x0) {
        value.y = (float)uVar15 + fStack_17 * fVar8;
        value.x = (float)uVar14 + fStack_16 * fVar8;
        value.z = fVar3 + *(float *)(puVar9 + 1) * fVar8;
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
  bVar18 = 0;
  uVar19 = func_?();
  bVar20 = (byte)(extraout_ECX >> 8);
  bVar21 = *(char *)&pGVar2->klass + bVar20;
  bVar22 = CARRY1(*(byte *)&pGVar2->klass,bVar20) || CARRY1(bVar21,bVar18);
  *(byte *)&pGVar2->klass = bVar21 + bVar18;
  pcVar23 = (char *)CONCAT31((int3)((uint)uVar19 >> 8),-bVar22);
  *pcVar23 = *pcVar23 + extraout_DL + bVar22;
  *(char *)&pGVar1[4].fields.__1__state = (char)pGVar1[4].fields.__1__state + extraout_DL;
  pcVar24 = (char *)((int)&pGVar1[0x4e9ab67].fields.__1__state + 1);
  cVar25 = SCARRY1(*pcVar24,bVar20);
  *pcVar24 = *pcVar24 + bVar20;
  pcVar26 = (code *)swi(4);
  if ((bool)cVar25) {
    pcVar23 = (char *)(*pcVar26)();
  }
  (**(code **)(pcVar23 + -0x18))();
  pcVar26 = (code *)swi(4);
  if (cVar25 == '\x01') {
    (*pcVar26)();
  }
  piVar27 = (int *)(((uint)((int)&unaff_EBX[-1].fields._._.m_CachedPtr + 2) | extraout_ECX) +
                  0x56006aef);
  *piVar27 = *piVar27 + -1;
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (in_stack_28,in_stack_29);
  func_?();
  func_?();
  pcVar26 = (code *)swi(3);
  bVar30 = (*pcVar26)();
  return bVar30;
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


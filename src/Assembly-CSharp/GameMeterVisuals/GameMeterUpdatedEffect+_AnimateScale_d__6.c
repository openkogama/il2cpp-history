
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
    cVar4 = (int)pGVar2 < 0;
    cVar5 = (POPCOUNT((uint)pGVar2 & 0xff) & 1U) == 0;
    cVar6 = true;
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar4 = (int)pGVar2 < 0;
  cVar6 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
  cVar5 = (POPCOUNT((uint)pGVar2 & 0xff) & 1U) == 0;
  if (!(bool)cVar6) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar7 = &(pGVar1->fields)._i_5__2;
    in_AF = '\0';
    pRVar8 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar7 || fVar3 == *pfVar7) {
      cVar4 = (int)pRVar8 < 0;
      cVar6 = pRVar8 == (RectTransform *)0x0;
      cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar8,(MethodInfo *)0x0);
        uStack_10._0_4_ = (pGVar2->fields).startSize.x;
        uStack_10._4_4_ = (pGVar2->fields).startSize.y;
        fStack_11 = (pGVar2->fields).startSize.z;
        puVar12 = (undefined8 *)func_?(&VStack_13,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_14._0_4_ = (float)*puVar12;
        uStack_14._4_4_ = (float)((ulonglong)*puVar12 >> 0x20);
        fVar15 = (float)uStack_10 + (float)uStack_14 * fVar3;
        fStack_16 = fStack_11 + *(float *)(puVar12 + 1) * fVar3;
        fVar3 = uStack_10._4_4_ + uStack_14._4_4_ * fVar3;
        uStack_14 = CONCAT44(fVar3,fVar15);
        cVar4 = (int)pTVar9 < 0;
        cVar6 = pTVar9 == (Transform *)0x0;
        cVar5 = (POPCOUNT((uint)pTVar9 & 0xff) & 1U) == 0;
        if (!(bool)cVar6) {
          value_00.y = fVar3;
          value_00.x = fVar15;
          value_00.z = fStack_16;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar9,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar7 = &(pGVar1->fields)._i_5__2;
          in_AF = '\0';
          pRVar8 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar7 || fVar3 == *pfVar7) {
            cVar4 = (int)pRVar8 < 0;
            cVar6 = pRVar8 == (RectTransform *)0x0;
            cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar8,(MethodInfo *)0x0);
              cVar4 = (int)pTVar9 < 0;
              cVar6 = pTVar9 == (Transform *)0x0;
              cVar5 = (POPCOUNT((uint)pTVar9 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar9,(pGVar2->fields).startSize,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar17;
                func_?(&(pGVar1->fields).__2__current,pOVar17);
                (pGVar1->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            cVar4 = (int)pRVar8 < 0;
            cVar6 = pRVar8 == (RectTransform *)0x0;
            cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (!(bool)cVar6) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar8,(MethodInfo *)0x0);
              cVar4 = (int)pTVar9 < 0;
              cVar6 = pTVar9 == (Transform *)0x0;
              cVar5 = (POPCOUNT((uint)pTVar9 & 0xff) & 1U) == 0;
              if (!(bool)cVar6) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_13,pTVar9,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar17;
                func_?(&(pGVar1->fields).__2__current,pOVar17);
                (pGVar1->fields).__1__state = 2;
                return 1;
              }
            }
          }
        }
      }
    }
    else {
      cVar4 = (int)pRVar8 < 0;
      cVar6 = pRVar8 == (RectTransform *)0x0;
      cVar5 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
      if (!(bool)cVar6) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar8,(MethodInfo *)0x0);
        uStack_14._0_4_ = (pGVar2->fields).startSize.x;
        uStack_14._4_4_ = (pGVar2->fields).startSize.y;
        fStack_16 = (pGVar2->fields).startSize.z;
        puVar12 = (undefined8 *)func_?(&VStack_13,0);
        uVar18 = *puVar12;
        fStack_11 = *(float *)(puVar12 + 1);
        uStack_10._0_4_ = (float)uVar18;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_10._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
        fVar15 = (float)uStack_14 + (float)uStack_10 * fVar3;
        fStack_16 = fStack_16 + fStack_11 * fVar3;
        uStack_14._4_4_ = uStack_14._4_4_ + uStack_10._4_4_ * fVar3;
        uStack_14 = CONCAT44(uStack_14._4_4_,fVar15);
        cVar4 = (int)pTVar9 < 0;
        cVar6 = pTVar9 == (Transform *)0x0;
        cVar5 = (POPCOUNT((uint)pTVar9 & 0xff) & 1U) == 0;
        uStack_10 = uVar18;
        if (!(bool)cVar6) {
          value.y = uStack_14._4_4_;
          value.x = fVar15;
          value.z = fStack_16;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar9,value,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pGVar1->fields).__2__current = pOVar17;
          func_?(&(pGVar1->fields).__2__current,pOVar17);
          (pGVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  bVar19 = 0;
  uVar18 = func_?();
  uVar20 = CONCAT22((short)((ulonglong)uVar18 >> 0x10),
                    CONCAT11(cVar4 << 7 | cVar6 << 6 | in_AF << 4 | cVar5 << 2 | 2U | bVar19,
                             (char)uVar18));
  pcVar21 = (char *)(uVar20 + 0x5d6139e5);
  *pcVar21 = *pcVar21 + (char)((ulonglong)uVar18 >> 0x20) + -1 + (uVar20 < 0x2daf104a);
  pbVar22 = (byte *)((int)((ulonglong)uVar18 >> 0x20) + 0xf);
  *pbVar22 = *pbVar22 ^ extraout_CL;
  uVar23 = func_?(&TypeInfo__System__NotSupportedException,pGVar1);
  this_00 = (NotSupportedException *)func_?(uVar23);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar23 = func_?(&
                           MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                          );
  func_?(this_00,uVar23);
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
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


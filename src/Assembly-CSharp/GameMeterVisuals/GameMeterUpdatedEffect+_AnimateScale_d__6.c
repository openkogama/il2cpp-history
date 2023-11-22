
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
    bVar5 = true;
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar4 = (int)pGVar2 < 0;
  bVar5 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
  if (!bVar5) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar6 = &(pGVar1->fields)._i_5__2;
    pRVar7 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_9._0_4_ = (pGVar2->fields).startSize.x;
        uStack_9._4_4_ = (pGVar2->fields).startSize.y;
        fStack_10 = (pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_13._0_4_ = (float)*puVar11;
        uStack_13._4_4_ = (float)((ulonglong)*puVar11 >> 0x20);
        fVar14 = (float)uStack_9 + (float)uStack_13 * fVar3;
        fVar15 = uStack_9._4_4_ + uStack_13._4_4_ * fVar3;
        uStack_13 = CONCAT44(fVar15,fVar14);
        fStack_16 = fStack_10 + *(float *)(puVar11 + 1) * fVar3;
        cVar4 = (int)pTVar8 < 0;
        bVar5 = pTVar8 == (Transform *)0x0;
        if (!bVar5) {
          value_00.y = fVar15;
          value_00.x = fVar14;
          value_00.z = fStack_16;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar8,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar6 = &(pGVar1->fields)._i_5__2;
          pRVar7 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar7,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          else {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar8 < 0;
              bVar5 = pTVar8 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_12,pTVar8,(MethodInfo *)0x0);
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
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_13._0_4_ = (pGVar2->fields).startSize.x;
        uStack_13._4_4_ = (pGVar2->fields).startSize.y;
        fStack_16 = (pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        uStack_9._0_4_ = (float)*puVar11;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_9._4_4_ = (float)((ulonglong)*puVar11 >> 0x20);
        fVar14 = (float)uStack_13 + (float)uStack_9 * fVar3;
        fVar15 = uStack_13._4_4_ + uStack_9._4_4_ * fVar3;
        uStack_9 = CONCAT44(fVar15,fVar14);
        fStack_10 = fStack_16 + *(float *)(puVar11 + 1) * fVar3;
        cVar4 = (int)pTVar8 < 0;
        bVar5 = pTVar8 == (Transform *)0x0;
        if (!bVar5) {
          value.y = fVar15;
          value.x = fVar14;
          value.z = fStack_10;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar8,value,(MethodInfo *)0x0);
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
  do {
    cVar18 = '\0';
    cVar19 = '\0';
    pTVar8 = (Transform *)func_?();
    if (bVar5 || cVar18 != cVar4) {
      pfVar6 = &pGVar2[0x2cd3509].fields.startSize.z;
      *(char *)pfVar6 = *(char *)pfVar6 + extraout_CL + -1 + cVar19;
      this_00 = (NotSupportedException *)func_?();
      mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
                (this_00,(MethodInfo *)0x0);
      uVar20 = func_?(&
                               MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                              );
      func_?(this_00,uVar20);
      pcVar21 = (code *)swi(3);
      bVar22 = (*pcVar21)();
      return bVar22;
    }
code_?:
    cVar4 = (int)pTVar8 < 0;
    bVar5 = true;
  } while (pTVar8 == (Transform *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            (pTVar8,(pGVar2->fields).startSize,(MethodInfo *)0x0);
  this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
  pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&this);
  (pGVar1->fields).__2__current = pOVar17;
  func_?(&(pGVar1->fields).__2__current,pOVar17);
  (pGVar1->fields).__1__state = 3;
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


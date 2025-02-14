
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
    bVar5 = pGVar2 == (GameMeterUpdatedEffect *)0x0;
    if (!bVar5) goto code_?;
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
        fStack_15 = fStack_10 + *(float *)(puVar11 + 1) * fVar3;
        fVar3 = uStack_9._4_4_ + uStack_13._4_4_ * fVar3;
        uStack_13 = CONCAT44(fVar3,fVar14);
        cVar4 = (int)pTVar8 < 0;
        bVar5 = pTVar8 == (Transform *)0x0;
        if (!bVar5) {
          value_00.y = fVar3;
          value_00.x = fVar14;
          value_00.z = fStack_15;
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
              cVar4 = (int)pTVar8 < 0;
              bVar5 = pTVar8 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar8,(pGVar2->fields).startSize,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar16;
                func_?(&(pGVar1->fields).__2__current,pOVar16);
                goto code_?;
              }
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
                pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar16;
                func_?(&(pGVar1->fields).__2__current,pOVar16);
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
        fStack_15 = (pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        uVar17 = *puVar11;
        fStack_10 = *(float *)(puVar11 + 1);
        uStack_9._0_4_ = (float)uVar17;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_9._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
        fVar14 = (float)uStack_13 + (float)uStack_9 * fVar3;
        fStack_15 = fStack_15 + fStack_10 * fVar3;
        uStack_13._4_4_ = uStack_13._4_4_ + uStack_9._4_4_ * fVar3;
        uStack_13 = CONCAT44(uStack_13._4_4_,fVar14);
        cVar4 = (int)pTVar8 < 0;
        bVar5 = pTVar8 == (Transform *)0x0;
        uStack_9 = uVar17;
        if (!bVar5) {
          value.y = uStack_13._4_4_;
          value.x = fVar14;
          value.z = fStack_15;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar8,value,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pGVar1->fields).__2__current = pOVar16;
          func_?(&(pGVar1->fields).__2__current,pOVar16);
          (pGVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  cVar18 = '\0';
  cVar19 = '\0';
  iVar20 = func_?();
  if (bVar5 || cVar18 != cVar4) {
    pcVar21 = (char *)((int)&pGVar2[0x2cd3518].fields.scaleTime + 2);
    *pcVar21 = *pcVar21 + (char)extraout_ECX + cVar19;
    *(char *)&pGVar1[4].fields.__1__state =
         (char)pGVar1[4].fields.__1__state + extraout_DL +
         ((longlong)(int)((longlong)extraout_ECX * 0x4b) != (longlong)extraout_ECX * 0x4b);
    pcVar21 = (char *)((int)&pGVar1[0xe9ab67].fields.__1__state + 1);
    cVar4 = *pcVar21;
    cVar19 = (char)((uint)extraout_ECX >> 8);
    *pcVar21 = *pcVar21 + cVar19;
    pcVar22 = (code *)swi(4);
    if (SCARRY1(cVar4,cVar19)) {
      iVar20 = (*pcVar22)();
    }
    (**(code **)(iVar20 + -0x18))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_?:
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


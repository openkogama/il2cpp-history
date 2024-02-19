
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
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_8._0_4_ = (pGVar2->fields).startSize.x;
        uStack_8._4_4_ = (pGVar2->fields).startSize.y;
        fStack_9 = (pGVar2->fields).startSize.z;
        puVar10 = (undefined8 *)func_?(&VStack_11,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_12._0_4_ = (float)*puVar10;
        uStack_12._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
        fVar13 = (float)uStack_8 + (float)uStack_12 * fVar3;
        fStack_14 = fStack_9 + *(float *)(puVar10 + 1) * fVar3;
        fVar3 = uStack_8._4_4_ + uStack_12._4_4_ * fVar3;
        uStack_12 = CONCAT44(fVar3,fVar13);
        cVar4 = (int)unaff_EBX < 0;
        bVar5 = unaff_EBX == (Transform *)0x0;
        if (!bVar5) {
          value_00.y = fVar3;
          value_00.x = fVar13;
          value_00.z = fStack_14;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar6 = &(pGVar1->fields)._i_5__2;
          pRVar7 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar6 || fVar3 == *pfVar6) {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar15 < 0;
              bVar5 = pTVar15 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar15,(pGVar2->fields).startSize,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar16;
                func_?(&(pGVar1->fields).__2__current,(short)pOVar16);
                (pGVar1->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = pRVar7 == (RectTransform *)0x0;
            if (!bVar5) {
              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar15 < 0;
              bVar5 = pTVar15 == (Transform *)0x0;
              if (!bVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          (&VStack_11,pTVar15,(MethodInfo *)0x0);
                this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
                pOVar16 = (Object *)func_?(TypeInfo__System__Int32,&this);
                (pGVar1->fields).__2__current = pOVar16;
                func_?(&(pGVar1->fields).__2__current,(short)pOVar16);
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
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_12._0_4_ = (pGVar2->fields).startSize.x;
        uStack_12._4_4_ = (pGVar2->fields).startSize.y;
        fStack_14 = (pGVar2->fields).startSize.z;
        puVar10 = (undefined8 *)func_?(&VStack_11,0);
        uVar17 = *puVar10;
        fStack_9 = *(float *)(puVar10 + 1);
        uStack_8._0_4_ = (float)uVar17;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_8._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
        fVar13 = (float)uStack_12 + (float)uStack_8 * fVar3;
        fStack_14 = fStack_14 + fStack_9 * fVar3;
        uStack_12._4_4_ = uStack_12._4_4_ + uStack_8._4_4_ * fVar3;
        uStack_12 = CONCAT44(uStack_12._4_4_,fVar13);
        cVar4 = (int)pTVar15 < 0;
        bVar5 = pTVar15 == (Transform *)0x0;
        unaff_EBX = (Transform *)0x0;
        uStack_8 = uVar17;
        if (!bVar5) {
          value.y = uStack_12._4_4_;
          value.x = fVar13;
          value.z = fStack_14;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar15,value,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar16 = (Object *)func_?(TypeInfo__System__Int32,(short)&this);
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
  bVar19 = 0;
  bVar20 = func_?();
  iVar21 = extraout_EDX;
  if (bVar5 || cVar18 != cVar4) {
    ppMVar22 = &pGVar2[0x2cd350d].monitor;
    bVar23 = *(char *)ppMVar22 + (byte)extraout_CX;
    bVar5 = CARRY1(*(byte *)ppMVar22,(byte)extraout_CX) || CARRY1(bVar23,bVar19);
    *(byte *)ppMVar22 = bVar23 + bVar19;
    iVar21 = extraout_EDX + -2;
    pbVar24 = (byte *)((int)&unaff_EBX[1].klass + 3);
    bVar19 = (byte)((ushort)extraout_CX >> 8);
    bVar23 = *pbVar24 + bVar19;
    bVar19 = CARRY1(*pbVar24,bVar19) || CARRY1(bVar23,bVar5);
    *pbVar24 = bVar23 + bVar5;
  }
  *(byte *)&pGVar1[4].fields.__1__state =
       (char)pGVar1[4].fields.__1__state + (char)iVar21 + -1 + bVar19;
  *(char *)(iVar21 + -0x7a17ee65) = *(char *)(iVar21 + -0x7a17ee65) + 'f';
  return bVar20;
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


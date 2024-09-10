
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  bVar5 = true;
  if (pGVar2 == (GameMeterUpdatedEffect *)0x0) {
code_?:
    cVar6 = '\0';
    bVar7 = 0;
    pbVar8 = (byte *)func_?();
    if (bVar5 || cVar6 != cVar4) {
      pVVar9 = &pGVar2[0x2cd3517].fields.startSize;
      bVar10 = *(char *)&pVVar9->x + (byte)extraout_CX;
      bVar5 = CARRY1(*(byte *)&pVVar9->x,(byte)extraout_CX) || CARRY1(bVar10,bVar7);
      *(byte *)&pVVar9->x = bVar10 + bVar7;
      cVar4 = 'K';
      pbVar11 = (byte *)((int)&unaff_EBX[-7].fields._._.m_CachedPtr + 2);
      bVar7 = *pbVar11;
      bVar12 = (byte)((ushort)extraout_CX >> 8);
      bVar10 = *pbVar11 + bVar12;
      *pbVar11 = bVar10 + bVar5;
      pGVar13 = &pGVar1[4].fields;
      *(char *)&pGVar13->__1__state =
           (char)pGVar13->__1__state + extraout_DL + (CARRY1(bVar7,bVar12) || CARRY1(bVar10,bVar5));
      pbVar11 = (byte *)((int)&unaff_EBX[-1].fields._._.m_CachedPtr + 2);
      if ((char)pGVar13->__1__state != '\0') {
        uVar14 = func_?();
        this_00 = (NotSupportedException *)func_?(uVar14);
        mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
                  (this_00,(MethodInfo *)0x0);
        VStack_15.x = (float)func_?(&
                                             MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                                            );
        func_?(this_00);
        pcVar16 = (code *)swi(3);
        bVar17 = (*pcVar16)();
        return bVar17;
      }
      goto code_?;
    }
    *pbVar8 = *pbVar8 | (byte)pbVar8;
    *pbVar8 = *pbVar8 + (byte)pbVar8;
    pbVar8[-1] = pbVar8[-1] + extraout_DL;
  }
  else {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar18 = &(pGVar1->fields)._i_5__2;
    pRVar19 = (pGVar2->fields).scaleTarget;
    if (*pfVar18 <= fVar3 && fVar3 != *pfVar18) {
      cVar4 = (int)pRVar19 < 0;
      bVar5 = pRVar19 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar19,(MethodInfo *)0x0);
        uStack_21._0_4_ = (pGVar2->fields).startSize.x;
        uStack_21._4_4_ = (pGVar2->fields).startSize.y;
        fStack_22 = (pGVar2->fields).startSize.z;
        puVar23 = (undefined8 *)func_?(&VStack_15,0);
        uVar24 = *puVar23;
        fStack_25 = *(float *)(puVar23 + 1);
        uStack_26._0_4_ = (float)uVar24;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_26._4_4_ = (byte *)((ulonglong)uVar24 >> 0x20);
        fVar27 = (float)uStack_21 + (float)uStack_26 * fVar3;
        fStack_22 = fStack_22 + fStack_25 * fVar3;
        uStack_21._4_4_ = uStack_21._4_4_ + (float)uStack_26._4_4_ * fVar3;
        uStack_21 = CONCAT44(uStack_21._4_4_,fVar27);
        cVar4 = (int)pTVar20 < 0;
        bVar5 = pTVar20 == (Transform *)0x0;
        unaff_EBX = (Transform *)0x0;
        uStack_26 = uVar24;
        if (!bVar5) {
          value.y = uStack_21._4_4_;
          value.x = fVar27;
          value.z = fStack_22;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar20,value,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar28 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pGVar1->fields).__2__current = pOVar28;
          func_?(&(pGVar1->fields).__2__current,pOVar28);
          (pGVar1->fields).__1__state = 1;
          return 1;
        }
      }
      goto code_?;
    }
    cVar4 = (int)pRVar19 < 0;
    bVar5 = true;
    if (pRVar19 == (RectTransform *)0x0) goto code_?;
    unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar19,(MethodInfo *)0x0);
    uStack_26._0_4_ = (pGVar2->fields).startSize.x;
    uStack_26._4_4_ = (byte *)(pGVar2->fields).startSize.y;
    fStack_25 = (pGVar2->fields).startSize.z;
    puVar23 = (undefined8 *)func_?(&VStack_15,0);
    fVar3 = (pGVar2->fields).scaleStrength;
    uStack_21._0_4_ = (float)*puVar23;
    uStack_21._4_4_ = (float)((ulonglong)*puVar23 >> 0x20);
    fVar27 = (float)uStack_26 + (float)uStack_21 * fVar3;
    fStack_22 = fStack_25 + *(float *)(puVar23 + 1) * fVar3;
    fVar3 = (float)uStack_26._4_4_ + uStack_21._4_4_ * fVar3;
    uStack_21 = CONCAT44(fVar3,fVar27);
    cVar4 = (int)unaff_EBX < 0;
    bVar5 = true;
    if (unaff_EBX == (Transform *)0x0) goto code_?;
    value_00.y = fVar3;
    value_00.x = fVar27;
    value_00.z = fStack_22;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (unaff_EBX,value_00,(MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = 0.0;
code_?:
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar18 = &(pGVar1->fields)._i_5__2;
    pRVar19 = (pGVar2->fields).scaleTarget;
    if (*pfVar18 <= fVar3 && fVar3 != *pfVar18) {
      cVar4 = (int)pRVar19 < 0;
      bVar5 = pRVar19 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar19,(MethodInfo *)0x0);
        cVar4 = (int)pTVar20 < 0;
        bVar5 = pTVar20 == (Transform *)0x0;
        if (!bVar5) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                    (&VStack_15,pTVar20,(MethodInfo *)0x0);
          this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
          pOVar28 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pGVar1->fields).__2__current = pOVar28;
          func_?(&(pGVar1->fields).__2__current,pOVar28);
          (pGVar1->fields).__1__state = 2;
          return 1;
        }
      }
      goto code_?;
    }
    cVar4 = (int)pRVar19 < 0;
    bVar5 = true;
    if (pRVar19 == (RectTransform *)0x0) goto code_?;
    pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pRVar19,(MethodInfo *)0x0);
    cVar4 = (int)pTVar20 < 0;
    bVar5 = true;
    if (pTVar20 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar20,(pGVar2->fields).startSize,(MethodInfo *)0x0);
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
  }
  pOVar28 = (Object *)func_?();
  (pGVar1->fields).__2__current = pOVar28;
  uVar14 = func_?(&(pGVar1->fields).__2__current,pOVar28);
  (pGVar1->fields).__1__state = 3;
  pbVar8 = (byte *)CONCAT31((int3)((uint)uVar14 >> 8),1);
  pbVar11 = uStack_26._4_4_;
  cVar4 = extraout_DH;
code_?:
  bVar7 = (byte)pbVar8;
  *pbVar11 = *pbVar11 | bVar7;
  *pbVar8 = *pbVar8 + bVar7;
  pbVar8[0x5b5e5f01] = pbVar8[0x5b5e5f01] + cVar4;
  return bVar7;
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


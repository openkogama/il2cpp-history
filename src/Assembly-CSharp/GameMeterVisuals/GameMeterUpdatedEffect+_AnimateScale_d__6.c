
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
    in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    in_XMM0_Db = 0.0;
    (this->fields).__1__state = -1;
    this = in_XMM0_Da;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar1->fields)._i_5__2 = fVar3 + (float)this;
    break;
  case 2:
    in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    in_XMM0_Db = 0.0;
    (this->fields).__1__state = -1;
    this = in_XMM0_Da;
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
  if (pGVar2 != (GameMeterUpdatedEffect *)0x0) {
    in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(pGVar2->fields).scaleTime;
    in_XMM0_Db = 0.0;
    pfVar6 = &(pGVar1->fields)._i_5__2;
    in_AF = 0;
    pRVar7 = (pGVar2->fields).scaleTarget;
    if (*pfVar6 <= (float)in_XMM0_Da && (float)in_XMM0_Da != *pfVar6) {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = pRVar7 == (RectTransform *)0x0;
      if (!bVar5) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_9._0_4_ = (pGVar2->fields).startSize.x;
        uStack_9._4_4_ = (pGVar2->fields).startSize.y;
        pGStack_10 = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        uVar13 = *puVar11;
        fStack_14 = *(float *)(puVar11 + 1);
        uStack_15._0_4_ = (float)uVar13;
        fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
                 (pGVar2->fields).scaleStrength;
        uStack_15._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
        fVar16 = (float)uStack_9 + (float)uStack_15 * fVar3;
        in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)
                     ((float)pGStack_10 + fStack_14 * fVar3);
        in_XMM0_Db = 0.0;
        uStack_9._4_4_ = uStack_9._4_4_ + uStack_15._4_4_ * fVar3;
        uStack_9 = CONCAT44(uStack_9._4_4_,fVar16);
        cVar4 = (int)pTVar8 < 0;
        bVar5 = pTVar8 == (Transform *)0x0;
        unaff_EBX = (Transform *)0x0;
        pGStack_10 = in_XMM0_Da;
        uStack_15 = uVar13;
        if (!bVar5) {
          value.y = uStack_9._4_4_;
          value.x = fVar16;
          value.z = (float)in_XMM0_Da;
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
    else {
      cVar4 = (int)pRVar7 < 0;
      bVar5 = true;
      if (pRVar7 != (RectTransform *)0x0) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar7,(MethodInfo *)0x0);
        uStack_15._0_4_ = (pGVar2->fields).startSize.x;
        uStack_15._4_4_ = (pGVar2->fields).startSize.y;
        fStack_14 = (pGVar2->fields).startSize.z;
        puVar11 = (undefined8 *)func_?(&VStack_12,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_9._0_4_ = (float)*puVar11;
        uStack_9._4_4_ = (float)((ulonglong)*puVar11 >> 0x20);
        fVar16 = (float)uStack_15 + (float)uStack_9 * fVar3;
        in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)
                     (fStack_14 + *(float *)(puVar11 + 1) * fVar3);
        in_XMM0_Db = 0.0;
        fVar3 = uStack_15._4_4_ + uStack_9._4_4_ * fVar3;
        uStack_9 = CONCAT44(fVar3,fVar16);
        cVar4 = (int)unaff_EBX < 0;
        bVar5 = true;
        pGStack_10 = in_XMM0_Da;
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar3;
          value_00.x = fVar16;
          value_00.z = (float)in_XMM0_Da;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(pGVar2->fields).scaleTime;
          in_XMM0_Db = 0.0;
          pfVar6 = &(pGVar1->fields)._i_5__2;
          in_AF = 0;
          pRVar7 = (pGVar2->fields).scaleTarget;
          if (*pfVar6 <= (float)in_XMM0_Da && (float)in_XMM0_Da != *pfVar6) {
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
          else {
            cVar4 = (int)pRVar7 < 0;
            bVar5 = true;
            if (pRVar7 != (RectTransform *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar7,(MethodInfo *)0x0);
              cVar4 = (int)pTVar8 < 0;
              bVar5 = true;
              if (pTVar8 != (Transform *)0x0) {
                in_XMM0_Da = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(pGVar2->fields).startSize.x
                ;
                in_XMM0_Db = (pGVar2->fields).startSize.y;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  cVar18 = '\0';
  bVar19 = 0;
  uVar13 = func_?();
  pTVar8 = (Transform *)((ulonglong)uVar13 >> 0x20);
  if (bVar5 || cVar18 != cVar4) {
    bVar20 = (byte)extraout_ECX - 1;
    ppMVar21 = &pGVar2[0x2cd350a].monitor;
    bVar22 = *(char *)ppMVar21 + bVar20;
    bVar5 = CARRY1(*(byte *)ppMVar21,bVar20) || CARRY1(bVar22,bVar19);
    *(byte *)ppMVar21 = bVar22 + bVar19;
    pbVar23 = (byte *)((int)&unaff_EBX[-9].klass + 3);
    bVar19 = *pbVar23;
    bVar20 = (byte)((uint)(extraout_ECX + -2) >> 8);
    bVar22 = *pbVar23 + bVar20;
    *pbVar23 = bVar22 + bVar5;
    pcVar24 = (char *)((int)uVar13 + 0x68);
    *pcVar24 = *pcVar24 + (char)((ulonglong)uVar13 >> 0x20) +
              (CARRY1(bVar19,bVar20) || CARRY1(bVar22,bVar5));
    *(byte *)&pGVar1->klass = *(byte *)&pGVar1->klass ^ (byte)unaff_EBX;
    if (&stack0xfffffffc + (int)&pGVar1->klass == (undefined1 *)0x0) {
      return 0;
    }
    iVar25 = (**(code **)((int)&uStack_9 + (int)pGVar1))
                       (&stack0xfffffffc,
                        (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                        (uint)(in_TF & 1) * 0x100 | (uint)(*(char *)&pGVar1->klass < '\0') * 0x80 |
                        (uint)(*(char *)&pGVar1->klass == '\0') * 0x40 | (uint)(in_AF & 1) * 0x10 |
                        (uint)((POPCOUNT(*(undefined1 *)&pGVar1->klass) & 1U) == 0) * 4 |
                        (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                        (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar26 = (**(code **)(iVar25 + -0xf740036))();
    return bVar26;
  }
  pcVar24 = (char *)((int)&pTVar8[-2].fields._._.m_CachedPtr + 3);
  *pcVar24 = *pcVar24 << ((byte)extraout_ECX & 0x1f);
  (pGVar2->fields).startSize.x = (float)extraout_ST0;
code_?:
  value_01.y = in_XMM0_Db;
  value_01.x = (float)in_XMM0_Da;
  value_01.z = (pGVar2->fields).startSize.z;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            (pTVar8,value_01,(MethodInfo *)0x0);
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


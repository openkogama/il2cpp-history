
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    fVar2 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar3 + fVar2;
    break;
  case 2:
    fVar2 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar3 + fVar2;
    if (pGVar1 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (pGVar1 != (GameMeterUpdatedEffect *)0x0) {
    fVar2 = (pGVar1->fields).scaleTime;
    pfVar4 = &(this->fields)._i_5__2;
    in_AF = 0;
    pRVar5 = (pGVar1->fields).scaleTarget;
    if (fVar2 < *pfVar4 || fVar2 == *pfVar4) {
      if (pRVar5 != (RectTransform *)0x0) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar5,(MethodInfo *)0x0);
        uStack_6._0_4_ = (pGVar1->fields).startSize.x;
        uStack_6._4_4_ = (pGVar1->fields).startSize.y;
        fStack_7 = (pGVar1->fields).startSize.z;
        puVar8 = (undefined8 *)func_?();
        fVar2 = (pGVar1->fields).scaleStrength;
        uStack_9._0_4_ = (float)*puVar8;
        uStack_9._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
        fVar3 = (float)uStack_6 + (float)uStack_9 * fVar2;
        fStack_10 = fStack_7 + *(float *)(puVar8 + 1) * fVar2;
        fVar2 = uStack_6._4_4_ + uStack_9._4_4_ * fVar2;
        uStack_9 = CONCAT44(fVar2,fVar3);
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar2;
          value_00.x = fVar3;
          value_00.z._0_2_ = SUB42(fStack_10,0);
          value_00.z._2_2_ = (short)((uint)fStack_10 >> 0x10);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (this->fields)._i_5__2 = 0.0;
code_?:
          fVar2 = (pGVar1->fields).scaleTime;
          pfVar4 = &(this->fields)._i_5__2;
          in_AF = 0;
          pRVar5 = (pGVar1->fields).scaleTarget;
          if (fVar2 < *pfVar4 || fVar2 == *pfVar4) {
            if ((pRVar5 != (RectTransform *)0x0) &&
               (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
               pTVar11 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar11,(pGVar1->fields).startSize,(MethodInfo *)0x0);
              pOVar12 = (Object *)func_?();
              (this->fields).__2__current = pOVar12;
              func_?();
              (this->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar5 != (RectTransform *)0x0) &&
                  (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
                  pTVar11 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_13,pTVar11,(MethodInfo *)0x0);
            pOVar12 = (Object *)func_?();
            (this->fields).__2__current = pOVar12;
            func_?();
            (this->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_9._0_4_ = (pGVar1->fields).startSize.x;
      uStack_9._4_4_ = (pGVar1->fields).startSize.y;
      fStack_10 = (pGVar1->fields).startSize.z;
      puVar8 = (undefined8 *)func_?();
      uVar14 = *puVar8;
      fStack_7 = *(float *)(puVar8 + 1);
      uStack_6._0_4_ = (float)uVar14;
      fVar2 = ((this->fields)._i_5__2 / (pGVar1->fields).scaleTime) *
               (pGVar1->fields).scaleStrength;
      uStack_6._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
      fVar3 = (float)uStack_9 + (float)uStack_6 * fVar2;
      fStack_10 = fStack_10 + fStack_7 * fVar2;
      uStack_9._4_4_ = uStack_9._4_4_ + uStack_6._4_4_ * fVar2;
      uStack_9 = CONCAT44(uStack_9._4_4_,fVar3);
      unaff_EBX = (Transform *)0x0;
      uStack_6 = uVar14;
      if (pTVar11 != (Transform *)0x0) {
        value.y = uStack_9._4_4_;
        value.x = fVar3;
        value.z._0_2_ = SUB42(fStack_10,0);
        value.z._2_2_ = (short)((uint)fStack_10 >> 0x10);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar11,value,(MethodInfo *)0x0);
        pOVar12 = (Object *)func_?();
        (this->fields).__2__current = pOVar12;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar15 = 0;
  uVar14 = func_?();
  bVar16 = (byte)uVar14;
  bVar17 = 9 < (bVar16 & 0xf);
  uVar18 = (undefined3)((ulonglong)uVar14 >> 8);
  bVar15 = 0x99 < bVar16 | bVar15;
  bVar19 = bVar16 + (bVar17 | in_AF) * -6 + bVar15 * -0x60;
  pcVar20 = (char *)CONCAT31(uVar18,bVar19);
  bVar16 = *(byte *)&pGVar1->klass;
  bVar21 = (byte)((uint)unaff_EBX >> 8);
  bVar22 = *(char *)&pGVar1->klass + bVar21;
  *(byte *)&pGVar1->klass = bVar22 + bVar15;
  *pcVar20 = *pcVar20 + (char)((ulonglong)uVar14 >> 8) +
             (CARRY1(bVar16,bVar21) || CARRY1(bVar22,bVar15));
  pbVar23 = (byte *)((int)((ulonglong)uVar14 >> 0x20) + 0xe);
  *pbVar23 = *pbVar23 & (byte)extraout_ECX;
  uVar24 = *extraout_ECX;
  *(char *)&this[4].fields.__1__state =
       (char)this[4].fields.__1__state + (char)((ulonglong)uVar14 >> 0x20) + -3 +
       (&stack0xffffffc8 < (undefined1 *)*extraout_ECX);
  bVar16 = bVar19 | 0xbc;
  *(uint *)(&stack0xffffffc4 + -uVar24) =
       (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
       (uint)((char)bVar16 < '\0') * 0x80 | (uint)(bVar16 == 0) * 0x40 |
       (uint)(bVar17 | in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar16) & 1U) == 0) * 4 |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  return (char)(&stack0xfffffffc + (CONCAT31(uVar18,bVar19) | 0xbc)) +
         (char)((uint)(&stack0xfffffffc + (CONCAT31(uVar18,bVar19) | 0xbc)) >> 8) * -0x78;
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


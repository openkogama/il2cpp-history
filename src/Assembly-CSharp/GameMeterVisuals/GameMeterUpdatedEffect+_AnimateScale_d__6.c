
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    in_stack_1 = &TypeInfo__System__Int32;
    func_?();
    cRam_? = '\x01';
  }
  pGVar2 = this;
  pGVar3 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    in_stack_1 = (Int32__Class **)0x0;
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar2->fields)._i_5__2 = fVar4 + (float)this;
    break;
  case 2:
    pRVar5 = (RectTransform *)0x0;
    (this->fields).__1__state = -1;
    this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)(this->fields)._i_5__2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pGVar2->fields)._i_5__2 = fVar4 + (float)this;
    in_stack_1 = (Int32__Class **)pRVar5;
    if (pGVar3 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (pGVar3 != (GameMeterUpdatedEffect *)0x0) {
    fVar4 = (pGVar3->fields).scaleTime;
    pfVar6 = &(pGVar2->fields)._i_5__2;
    in_AF = 0;
    pRVar5 = (pGVar3->fields).scaleTarget;
    if (fVar4 < *pfVar6 || fVar4 == *pfVar6) {
      if (pRVar5 != (RectTransform *)0x0) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar5,(MethodInfo *)0x0);
        uStack_7._0_4_ = (pGVar3->fields).startSize.x;
        uStack_7._4_4_ = (pGVar3->fields).startSize.y;
        fStack_8 = (pGVar3->fields).startSize.z;
        in_stack_1 = (Int32__Class **)0x0;
        puVar9 = (undefined8 *)func_?(&VStack_10);
        fVar4 = (pGVar3->fields).scaleStrength;
        uStack_11._0_4_ = (float)*puVar9;
        uStack_11._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
        fVar12 = (float)uStack_7 + (float)uStack_11 * fVar4;
        pRVar5 = (RectTransform *)(fStack_8 + *(float *)(puVar9 + 1) * fVar4);
        fVar4 = uStack_7._4_4_ + uStack_11._4_4_ * fVar4;
        uStack_11 = CONCAT44(fVar4,fVar12);
        pRStack_13 = pRVar5;
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar4;
          value_00.x = fVar12;
          value_00.z = (float)pRVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar2->fields)._i_5__2 = 0.0;
code_?:
          fVar4 = (pGVar3->fields).scaleTime;
          pfVar6 = &(pGVar2->fields)._i_5__2;
          in_AF = 0;
          this_01 = (pGVar3->fields).scaleTarget;
          in_stack_1 = (Int32__Class **)pRVar5;
          if (fVar4 < *pfVar6 || fVar4 == *pfVar6) {
            if ((this_01 != (RectTransform *)0x0) &&
               (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
               in_stack_1 = (Int32__Class **)this_01, pTVar14 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar14,(pGVar3->fields).startSize,(MethodInfo *)0x0);
              this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
              pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
              (pGVar2->fields).__2__current = pOVar15;
              func_?(&(pGVar2->fields).__2__current,pOVar15);
              (pGVar2->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((this_01 != (RectTransform *)0x0) &&
                  (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                  in_stack_1 = (Int32__Class **)this_01, pTVar14 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_10,pTVar14,(MethodInfo *)0x0);
            this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
            pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pGVar2->fields).__2__current = pOVar15;
            func_?(&(pGVar2->fields).__2__current,pOVar15);
            (pGVar2->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_11._0_4_ = (pGVar3->fields).startSize.x;
      uStack_11._4_4_ = (pGVar3->fields).startSize.y;
      pRStack_13 = (RectTransform *)(pGVar3->fields).startSize.z;
      in_stack_1 = (Int32__Class **)0x0;
      puVar9 = (undefined8 *)func_?(&VStack_10);
      uVar16 = *puVar9;
      fStack_8 = *(float *)(puVar9 + 1);
      uStack_7._0_4_ = (float)uVar16;
      fVar4 = ((pGVar2->fields)._i_5__2 / (pGVar3->fields).scaleTime) *
               (pGVar3->fields).scaleStrength;
      uStack_7._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
      fVar12 = (float)uStack_11 + (float)uStack_7 * fVar4;
      pRStack_13 = (RectTransform *)((float)pRStack_13 + fStack_8 * fVar4);
      uStack_11._4_4_ = uStack_11._4_4_ + uStack_7._4_4_ * fVar4;
      uStack_11 = CONCAT44(uStack_11._4_4_,fVar12);
      unaff_EBX = (Transform *)0x0;
      uStack_7 = uVar16;
      if (pTVar14 != (Transform *)0x0) {
        value.y = uStack_11._4_4_;
        value.x = fVar12;
        value.z = (float)pRStack_13;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar14,value,(MethodInfo *)0x0);
        this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
        pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pGVar2->fields).__2__current = pOVar15;
        func_?(&(pGVar2->fields).__2__current,pOVar15);
        (pGVar2->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar17 = false;
  puVar18 = &UNK_?;
  uVar19 = func_?();
  *(bool *)(extraout_ECX + 0x10) = !bVar17;
  bVar20 = *(byte *)&unaff_EBX->klass;
  bVar21 = *(char *)&unaff_EBX->klass + (byte)unaff_EBX;
  *(byte *)&unaff_EBX->klass = bVar21 + bVar17;
  bVar22 = (byte)((ushort)uVar19 >> 8);
  *(char *)&pGVar2[4].fields.__1__state =
       (char)pGVar2[4].fields.__1__state + extraout_DL +
       (CARRY1((byte)uVar19,bVar22) ||
       CARRY1((byte)uVar19 + bVar22,CARRY1(bVar20,(byte)unaff_EBX) || CARRY1(bVar21,bVar17)));
  *(byte *)&unaff_EBX->klass = *(byte *)&unaff_EBX->klass ^ (char)extraout_ECX - 3U;
  puVar23 = (undefined4 *)CONCAT33((int3)puVar18,(int3)((uint)in_stack_1 >> 8));
  uRam_? = (**(code **)((int)&uStack_11 + (int)unaff_EBX))
                           ((uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                            (uint)(in_TF & 1) * 0x100 |
                            (uint)(*(char *)&unaff_EBX->klass < '\0') * 0x80 |
                            (uint)(*(char *)&unaff_EBX->klass == '\0') * 0x40 |
                            (uint)(in_AF & 1) * 0x10 |
                            (uint)((POPCOUNT(*(undefined1 *)&unaff_EBX->klass) & 1U) == 0) * 4 |
                            (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                            (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
  this_00 = (NotSupportedException *)(puVar23 + 1);
  out(*puVar23,extraout_DX);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  VStack_10.y = (float)func_?(&
                                       MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                                      );
  VStack_10.x = (float)this_00;
  func_?();
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


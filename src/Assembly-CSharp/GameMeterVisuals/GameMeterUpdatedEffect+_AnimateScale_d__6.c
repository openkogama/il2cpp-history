
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
        puStack_6 = (undefined *)(pGVar2->fields).startSize.x;
        unique0x0000a404 = (pGVar2->fields).startSize.y;
        fVar7 = (pGVar2->fields).startSize.z;
        puVar8 = (undefined8 *)func_?(&VStack_9,0);
        uVar10 = _puStack_10;
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_11._0_4_ = (float)*puVar8;
        uStack_11._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
        fVar12 = (float)puStack_6 + (float)uStack_11 * fVar3;
        stack0xfffffff4 = (float)((ulonglong)_puStack_10 >> 0x20);
        fStack_13 = fVar7 + *(float *)(puVar8 + 1) * fVar3;
        fVar3 = stack0xfffffff4 + uStack_11._4_4_ * fVar3;
        uStack_11 = CONCAT44(fVar3,fVar12);
        _puStack_10 = uVar10;
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar3;
          value_00.x = fVar12;
          value_00.z = fStack_13;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar4 = &(pGVar1->fields)._i_5__2;
          pRVar5 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
            if ((pRVar5 != (RectTransform *)0x0) &&
               (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
               pTVar14 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar14,(pGVar2->fields).startSize,(MethodInfo *)0x0);
              this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
              pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
              (pGVar1->fields).__2__current = pOVar15;
              func_?(&(pGVar1->fields).__2__current,pOVar15);
              (pGVar1->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar5 != (RectTransform *)0x0) &&
                  (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
                  pTVar14 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_9,pTVar14,(MethodInfo *)0x0);
            this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
            pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pGVar1->fields).__2__current = pOVar15;
            func_?(&(pGVar1->fields).__2__current,pOVar15);
            (pGVar1->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_11._0_4_ = (pGVar2->fields).startSize.x;
      uStack_11._4_4_ = (pGVar2->fields).startSize.y;
      fStack_13 = (pGVar2->fields).startSize.z;
      puVar8 = (undefined8 *)func_?(&VStack_9,0);
      uVar10 = *puVar8;
      puStack_6 = (undefined *)uVar10;
      fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      stack0xfffffff4 = (float)((ulonglong)uVar10 >> 0x20);
      fVar7 = (float)uStack_11 + (float)puStack_6 * fVar3;
      fStack_13 = fStack_13 + *(float *)(puVar8 + 1) * fVar3;
      uStack_11._4_4_ = uStack_11._4_4_ + stack0xfffffff4 * fVar3;
      uStack_11 = CONCAT44(uStack_11._4_4_,fVar7);
      unaff_EBX = (Transform *)0x0;
      _puStack_10 = uVar10;
      if (pTVar14 != (Transform *)0x0) {
        value.y = uStack_11._4_4_;
        value.x = fVar7;
        value.z = fStack_13;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar14,value,(MethodInfo *)0x0);
        this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
        pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pGVar1->fields).__2__current = pOVar15;
        func_?(&(pGVar1->fields).__2__current,pOVar15);
        (pGVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar16 = 0;
  uVar17 = func_?();
  out((short)((uint6)uVar17 >> 0x20),(int)uVar17);
  bVar18 = (char)unaff_EBX - 1;
  pbVar19 = (byte *)((int)&pGVar2[-1].fields.scaleTime + 2);
  bVar20 = *pbVar19 + bVar18;
  bVar21 = CARRY1(*pbVar19,bVar18) || CARRY1(bVar20,bVar16);
  *pbVar19 = bVar20 + bVar16;
  pbVar19 = (byte *)((int)uVar17 + -0xf);
  bVar20 = *pbVar19 + (byte)uVar17;
  bVar22 = CARRY1(*pbVar19,(byte)uVar17) || CARRY1(bVar20,bVar21);
  *pbVar19 = bVar20 + bVar21;
  pbVar19 = (byte *)((int)&unaff_EBX[-1].fields._._.m_CachedPtr + 1);
  bVar20 = *pbVar19;
  bVar16 = (byte)((uint)pbVar19 >> 8);
  bVar18 = *pbVar19 + bVar16;
  *pbVar19 = bVar18 + bVar22;
  *(char *)&pGVar1[4].fields.__1__state =
       (char)pGVar1[4].fields.__1__state + (char)((uint6)uVar17 >> 0x20) +
       (CARRY1(bVar20,bVar16) || CARRY1(bVar18,bVar22));
  func_?();
  this_00 = (NotSupportedException *)func_?();
  _puStack_10 = CONCAT44(this_00,&UNK_?);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  _puStack_10 = CONCAT44(&UNK_?,puStack_6);
  method = (MethodInfo *)func_?();
  this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)this_00;
  func_?();
  pcVar23 = (code *)swi(3);
  bVar24 = (*pcVar23)();
  return bVar24;
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


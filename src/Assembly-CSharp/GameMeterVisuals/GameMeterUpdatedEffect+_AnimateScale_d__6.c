
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    (this->fields)._i_5__2 = 0.0;
    break;
  case 1:
    fVar3 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar4 + fVar3;
    break;
  case 2:
    fVar3 = (this->fields)._i_5__2;
    (this->fields).__1__state = -1;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._i_5__2 = fVar4 + fVar3;
    if (pGVar2 == (GameMeterUpdatedEffect *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (pGVar2 != (GameMeterUpdatedEffect *)0x0) {
    fVar3 = (pGVar2->fields).scaleTime;
    pfVar5 = &(this->fields)._i_5__2;
    pRVar6 = (pGVar2->fields).scaleTarget;
    if (fVar3 < *pfVar5 || fVar3 == *pfVar5) {
      if (pRVar6 != (RectTransform *)0x0) {
        unaff_EBX = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar6,(MethodInfo *)0x0);
        uStack_7._0_4_ = (pGVar2->fields).startSize.x;
        uStack_7._4_4_ = (pGVar2->fields).startSize.y;
        fStack_8 = (pGVar2->fields).startSize.z;
        puVar9 = (undefined8 *)func_?(&VStack_10,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_11._0_4_ = (float)*puVar9;
        uStack_11._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
        fVar4 = (float)uStack_7 + (float)uStack_11 * fVar3;
        fStack_12 = fStack_8 + *(float *)(puVar9 + 1) * fVar3;
        fVar3 = uStack_7._4_4_ + uStack_11._4_4_ * fVar3;
        uStack_11 = CONCAT44(fVar3,fVar4);
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar3;
          value_00.x = fVar4;
          value_00.z = fStack_12;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (unaff_EBX,value_00,(MethodInfo *)0x0);
          (this->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar5 = &(this->fields)._i_5__2;
          pRVar6 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar5 || fVar3 == *pfVar5) {
            if ((pRVar6 != (RectTransform *)0x0) &&
               (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar6,(MethodInfo *)0x0),
               pTVar13 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar13,(pGVar2->fields).startSize,(MethodInfo *)0x0);
              pOVar14 = (Object *)func_?();
              (this->fields).__2__current = pOVar14;
              func_?(&(this->fields).__2__current);
              (this->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar6 != (RectTransform *)0x0) &&
                  (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar6,(MethodInfo *)0x0),
                  pTVar13 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_10,pTVar13,(MethodInfo *)0x0);
            pOVar14 = (Object *)func_?();
            (this->fields).__2__current = pOVar14;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar6 != (RectTransform *)0x0) {
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar6,(MethodInfo *)0x0);
      uStack_11._0_4_ = (pGVar2->fields).startSize.x;
      uStack_11._4_4_ = (pGVar2->fields).startSize.y;
      fStack_12 = (pGVar2->fields).startSize.z;
      puVar9 = (undefined8 *)func_?(&VStack_10,0);
      uVar15 = *puVar9;
      fStack_8 = *(float *)(puVar9 + 1);
      uStack_7._0_4_ = (float)uVar15;
      fVar3 = ((this->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_7._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
      fVar4 = (float)uStack_11 + (float)uStack_7 * fVar3;
      fStack_12 = fStack_12 + fStack_8 * fVar3;
      uStack_11._4_4_ = uStack_11._4_4_ + uStack_7._4_4_ * fVar3;
      uStack_11 = CONCAT44(uStack_11._4_4_,fVar4);
      unaff_EBX = (Transform *)0x0;
      uStack_7 = uVar15;
      if (pTVar13 != (Transform *)0x0) {
        value.y = uStack_11._4_4_;
        value.x = fVar4;
        value.z = fStack_12;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar13,value,(MethodInfo *)0x0);
        pOVar14 = (Object *)func_?(TypeInfo__System__Int32);
        (this->fields).__2__current = pOVar14;
        func_?(&(this->fields).__2__current,pOVar14);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar16 = 0;
  uVar17 = func_?();
  out(this->klass,(short)((uint6)uVar17 >> 0x20));
  pbVar18 = (byte *)((int)&pGVar2[-1].fields.startSize.y + 2);
  bVar19 = (byte)((uint)((int)&unaff_EBX[-1].fields._._.m_CachedPtr + 3) >> 8);
  bVar20 = *pbVar18 + bVar19;
  bVar21 = CARRY1(*pbVar18,bVar19) || CARRY1(bVar20,bVar16);
  *pbVar18 = bVar20 + bVar16;
  pbVar18 = (byte *)((int)uVar17 + -4);
  bVar19 = (byte)((uint6)uVar17 >> 8);
  bVar20 = *pbVar18 + bVar19;
  bVar22 = CARRY1(*pbVar18,bVar19) || CARRY1(bVar20,bVar21);
  *pbVar18 = bVar20 + bVar21;
  bVar16 = (char)unaff_EBX - 3;
  pbVar18 = (byte *)((int)&unaff_EBX[-1].monitor + 2);
  bVar20 = *pbVar18;
  bVar19 = *pbVar18 + bVar16;
  *pbVar18 = bVar19 + bVar22;
  ppOVar23 = &this[4].fields.__2__current;
  *(char *)ppOVar23 =
       *(char *)ppOVar23 + (char)((uint6)uVar17 >> 0x20) +
       (CARRY1(bVar20,bVar16) || CARRY1(bVar19,bVar22));
  puVar24 = (undefined4 *)&stack0xffffffcc;
  cVar25 = '\x10';
  do {
    puVar1 = puVar1 + -1;
    puVar24 = puVar24 + -1;
    *puVar24 = *puVar1;
    cVar25 = cVar25 + -1;
  } while ('\0' < cVar25);
  uVar26 = func_?();
  this_00 = (NotSupportedException *)func_?(uVar26);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar26 = func_?(&
                           MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                          );
  func_?(this_00,uVar26);
  pcVar27 = (code *)swi(3);
  bVar28 = (*pcVar27)();
  return bVar28;
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


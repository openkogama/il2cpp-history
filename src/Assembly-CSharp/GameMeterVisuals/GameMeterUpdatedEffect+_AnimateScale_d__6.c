
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
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
    if (pGVar2 != (GameMeterUpdatedEffect *)0x0) goto code_?;
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
        puVar9 = (undefined8 *)func_?();
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_10._0_4_ = (float)*puVar9;
        uStack_10._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
        fVar4 = (float)uStack_7 + (float)uStack_10 * fVar3;
        fVar11 = uStack_7._4_4_ + uStack_10._4_4_ * fVar3;
        uStack_10 = CONCAT44(fVar11,fVar4);
        fStack_12 = fStack_8 + *(float *)(puVar9 + 1) * fVar3;
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar11;
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
              func_?();
              (this->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar6 != (RectTransform *)0x0) &&
                  (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar6,(MethodInfo *)0x0),
                  pTVar13 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_15,pTVar13,(MethodInfo *)0x0);
            pOVar14 = (Object *)func_?();
            (this->fields).__2__current = pOVar14;
            func_?();
            (this->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar6 != (RectTransform *)0x0) {
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar6,(MethodInfo *)0x0);
      uStack_10._0_4_ = (pGVar2->fields).startSize.x;
      uStack_10._4_4_ = (pGVar2->fields).startSize.y;
      fStack_12 = (pGVar2->fields).startSize.z;
      puVar9 = (undefined8 *)func_?();
      uStack_7._0_4_ = (float)*puVar9;
      fVar3 = ((this->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_7._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
      fVar4 = (float)uStack_10 + (float)uStack_7 * fVar3;
      fVar11 = uStack_10._4_4_ + uStack_7._4_4_ * fVar3;
      uStack_7 = CONCAT44(fVar11,fVar4);
      fStack_8 = fStack_12 + *(float *)(puVar9 + 1) * fVar3;
      unaff_EBX = (Transform *)0x0;
      if (pTVar13 != (Transform *)0x0) {
        value.y = fVar11;
        value.x = fVar4;
        value.z = fStack_8;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar13,value,(MethodInfo *)0x0);
        pOVar14 = (Object *)func_?();
        (this->fields).__2__current = pOVar14;
        func_?();
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar16 = 0;
  iVar17 = func_?();
  if ((int)pGVar2 < 1) {
code_?:
    pcVar18 = (code *)swi(3);
    bVar19 = (*pcVar18)();
    return bVar19;
  }
  pbVar20 = (byte *)((int)&pGVar2[3].fields.scaleStrength + 3);
  bVar21 = *pbVar20 + (byte)unaff_EBX;
  bVar22 = CARRY1(*pbVar20,(byte)unaff_EBX) || CARRY1(bVar21,bVar16);
  *pbVar20 = bVar21 + bVar16;
  pbVar20 = (byte *)(iVar17 + 0x7e);
  bVar16 = *pbVar20 + (byte)iVar17;
  bVar23 = CARRY1(*pbVar20,(byte)iVar17) || CARRY1(bVar16,bVar22);
  *pbVar20 = bVar16 + bVar22;
  bVar16 = *(byte *)&unaff_EBX->klass;
  bVar24 = (byte)((uint)unaff_EBX >> 8);
  cVar25 = *(char *)&unaff_EBX->klass;
  bVar21 = *(char *)&unaff_EBX->klass + bVar24;
  *(byte *)&unaff_EBX->klass = bVar21 + bVar23;
  if (*(char *)&unaff_EBX->klass == '\0' ||
      (SCARRY1(cVar25,bVar24) != SCARRY1(bVar21,bVar23)) != *(char *)&unaff_EBX->klass < '\0') {
    *(char *)&this[4].fields.__1__state =
         (char)this[4].fields.__1__state + extraout_DL + '\x02' +
         (CARRY1(bVar16,bVar24) || CARRY1(bVar21,bVar23));
    puVar26 = (undefined4 *)0xe810ee4a;
    cVar25 = '\a';
    puRam_? = &stack0xfffffffc;
    do {
      puVar1 = puVar1 + -1;
      puVar26 = puVar26 + -1;
      *puVar26 = *puVar1;
      cVar25 = cVar25 + -1;
    } while ('\0' < cVar25);
    uRam_? = 0xe810ee4a;
    pvRame8109d27 = unaff_EBX[-0x149aab0].fields._._.m_CachedPtr;
    pGRame8109d23 = this;
    puRam_? = &UNK_?;
    func_?();
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              ((NotSupportedException *)this,(MethodInfo *)0x0);
    func_?();
    func_?();
    goto code_?;
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__,
                    (undefined1 *)((int)&pGVar2[-1].fields.startSize.z + 3),this);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar17 = *(int *)((int)VStack_15.x + 8);
  iVar27 = *(int *)((int)VStack_15.x + 0x10);
  if (iVar17 != 0) {
    if (iVar17 == 1) {
      *(undefined4 *)((int)VStack_15.x + 8) = 0xffffffff;
      if ((iVar27 != 0) && (piVar28 = *(int **)(iVar27 + 0x14), piVar28 != (int *)0x0)) {
        (**(code **)(*piVar28 + 0x174))
                  (piVar28,*(undefined4 *)(iVar27 + 0x20),*(undefined4 *)(iVar27 + 0x24),
                   *(undefined4 *)(iVar27 + 0x28),*(undefined4 *)(iVar27 + 0x2c),
                   *(undefined4 *)(*piVar28 + 0x178));
        pSVar29 = (SubscribableVariableBase_1_System_Single_ *)
                  func_?(TypeInfo__UnityEngine__WaitForSeconds);
        if (pSVar29 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
          SubscribableVariableBase`1[System::Single]::
          SubscribableVariableBase_1_System_Single___ctor(pSVar29,0.3,(MethodInfo *)0x0);
          *(SubscribableVariableBase_1_System_Single_ **)((int)VStack_15.x + 0xc) = pSVar29;
          func_?((int)VStack_15.x + 0xc,pSVar29);
          *(undefined4 *)((int)VStack_15.x + 8) = 2;
          return 1;
        }
      }
      goto code_?;
    }
    if (iVar17 != 2) {
      return 0;
    }
  }
  *(undefined4 *)((int)VStack_15.x + 8) = 0xffffffff;
  if (iVar27 != 0) {
    if ((*(char *)(iVar27 + 0x18) == '\0') || (*(char *)(iVar27 + 0x30) == '\0')) {
      return 0;
    }
    piVar28 = *(int **)(iVar27 + 0x14);
    pRVar30 = mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
              Nullable_1_UnityEngine_Rect__get_Value
                        ((Rect *)&stack0xffffffc0,(Nullable_1_UnityEngine_Rect_ *)(iVar27 + 0x30),
                         MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    if (piVar28 != (int *)0x0) {
      (**(code **)(*piVar28 + 0x174))
                (piVar28,pRVar30->m_XMin,pRVar30->m_YMin,pRVar30->m_Width,pRVar30->m_Height);
      pSVar29 = (SubscribableVariableBase_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      if (pSVar29 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
        SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single___ctor
                  (pSVar29,0.3,(MethodInfo *)0x0);
        *(SubscribableVariableBase_1_System_Single_ **)((int)VStack_15.x + 0xc) = pSVar29;
        func_?((int)VStack_15.x + 0xc,pSVar29);
        *(undefined4 *)((int)VStack_15.x + 8) = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>d__6::
     GameMeterUpdatedEffect_AnimateScale_d_6_System_Collections_IEnumerator_Reset
               (GameMeterUpdatedEffect_AnimateScale_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
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


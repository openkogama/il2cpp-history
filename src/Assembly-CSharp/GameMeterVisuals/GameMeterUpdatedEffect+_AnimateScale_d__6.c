
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
        puVar9 = (undefined8 *)func_?(&VStack_10);
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
                      (&VStack_10,pTVar13,(MethodInfo *)0x0);
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
      uStack_11._0_4_ = (pGVar2->fields).startSize.x;
      uStack_11._4_4_ = (pGVar2->fields).startSize.y;
      fStack_12 = (pGVar2->fields).startSize.z;
      puVar9 = (undefined8 *)func_?(&VStack_10);
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
        pOVar14 = (Object *)func_?();
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
  bVar18 = (byte)((uint6)uVar17 >> 0x28);
  bVar19 = (byte)uVar17 + bVar18;
  cVar20 = (char)((uint6)uVar17 >> 0x20);
  *(char *)&this[4].fields.__1__state =
       (char)this[4].fields.__1__state + cVar20 +
       (0xb4 < (byte)((char)unaff_EBX - 1U) ||
       CARRY1((char)unaff_EBX + 0x4a,CARRY1((byte)uVar17,bVar18) || CARRY1(bVar19,bVar16)));
  uVar21 = in(CONCAT11(0x4b,cVar20));
  *(undefined1 *)&pGVar2->klass = uVar21;
  puVar22 = (undefined4 *)&stack0xffffffc8;
  cVar20 = '\a';
  do {
    puVar1 = puVar1 + -1;
    puVar22 = puVar22 + -1;
    *puVar22 = *puVar1;
    cVar20 = cVar20 + -1;
  } while ('\0' < cVar20);
  this_00 = (NotSupportedException *)func_?(bVar19 + bVar16,&stack0xffffffc8);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar23 = func_?(&
                           MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                          );
  func_?(this_00,uVar23);
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


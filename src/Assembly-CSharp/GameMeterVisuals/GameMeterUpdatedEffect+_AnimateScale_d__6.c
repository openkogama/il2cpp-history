
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
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pRVar5,(MethodInfo *)0x0);
        uStack_7._0_4_ = (pGVar2->fields).startSize.x;
        uStack_7._4_4_ = (pGVar2->fields).startSize.y;
        fStack_8 = (pGVar2->fields).startSize.z;
        puVar9 = (undefined8 *)func_?(&VStack_10,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_11._0_4_ = (float)*puVar9;
        uStack_11._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
        fVar12 = (float)uStack_7 + (float)uStack_11 * fVar3;
        fStack_13 = fStack_8 + *(float *)(puVar9 + 1) * fVar3;
        fVar3 = uStack_7._4_4_ + uStack_11._4_4_ * fVar3;
        uStack_11 = CONCAT44(fVar3,fVar12);
        if (pTVar6 != (Transform *)0x0) {
          value_00.y = fVar3;
          value_00.x = fVar12;
          value_00.z = fStack_13;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar6,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar4 = &(pGVar1->fields)._i_5__2;
          pRVar5 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
            if ((pRVar5 != (RectTransform *)0x0) &&
               (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
               pTVar6 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar6,(pGVar2->fields).startSize,(MethodInfo *)0x0);
              this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
              pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
              (pGVar1->fields).__2__current = pOVar14;
              func_?(&(pGVar1->fields).__2__current,pOVar14);
              (pGVar1->fields).__1__state = 3;
              return 1;
            }
          }
          else if ((pRVar5 != (RectTransform *)0x0) &&
                  (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
                  pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_10,pTVar6,(MethodInfo *)0x0);
            this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
            pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pGVar1->fields).__2__current = pOVar14;
            func_?(&(pGVar1->fields).__2__current,pOVar14);
            (pGVar1->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_11._0_4_ = (pGVar2->fields).startSize.x;
      uStack_11._4_4_ = (pGVar2->fields).startSize.y;
      fStack_13 = (pGVar2->fields).startSize.z;
      puVar9 = (undefined8 *)func_?(&VStack_10,0);
      uVar15 = *puVar9;
      fStack_8 = *(float *)(puVar9 + 1);
      uStack_7._0_4_ = (float)uVar15;
      fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_7._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
      fVar12 = (float)uStack_11 + (float)uStack_7 * fVar3;
      fStack_13 = fStack_13 + fStack_8 * fVar3;
      uStack_11._4_4_ = uStack_11._4_4_ + uStack_7._4_4_ * fVar3;
      uStack_11 = CONCAT44(uStack_11._4_4_,fVar12);
      uStack_7 = uVar15;
      if (pTVar6 != (Transform *)0x0) {
        value.y = uStack_11._4_4_;
        value.x = fVar12;
        value.z = fStack_13;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar6,value,(MethodInfo *)0x0);
        this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
        pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pGVar1->fields).__2__current = pOVar14;
        func_?(&(pGVar1->fields).__2__current,pOVar14);
        (pGVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  bVar16 = 0;
  iVar17 = func_?();
  from_bcd(*(unkbyte10 *)(iVar17 + -0x5f10efb7));
  bVar18 = (byte)iVar17 + extraout_DL;
  cRam_? = bVar18 + bVar16;
  *(byte *)&pGVar1[4].fields.__1__state =
       (char)pGVar1[4].fields.__1__state + extraout_DL +
       (CARRY1((byte)iVar17,extraout_DL) || CARRY1(bVar18,bVar16));
  pcVar19 = (code *)swi(0xff);
  uVar20 = (*pcVar19)();
  this_00 = (NotSupportedException *)func_?(uVar20);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  VStack_10.x = (float)func_?(&
                                       MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                                      );
  func_?(this_00);
  pcVar19 = (code *)swi(3);
  bVar21 = (*pcVar19)();
  return bVar21;
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


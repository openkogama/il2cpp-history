
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
        uStack_6._0_4_ = (pGVar2->fields).startSize.x;
        uStack_6._4_4_ = (pGVar2->fields).startSize.y;
        fStack_7 = (pGVar2->fields).startSize.z;
        puVar8 = (undefined8 *)func_?(&VStack_9,0);
        fVar3 = (pGVar2->fields).scaleStrength;
        uStack_10._0_4_ = (float)*puVar8;
        uStack_10._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
        fVar11 = (float)uStack_6 + (float)uStack_10 * fVar3;
        fVar12 = uStack_6._4_4_ + uStack_10._4_4_ * fVar3;
        uStack_10 = CONCAT44(fVar12,fVar11);
        fStack_13 = fStack_7 + *(float *)(puVar8 + 1) * fVar3;
        if (unaff_EBX != (Transform *)0x0) {
          value_00.y = fVar12;
          value_00.x = fVar11;
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
              ppOVar16 = &(pGVar1->fields).__2__current;
              *ppOVar16 = pOVar15;
              func_?(ppOVar16,pOVar15);
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
            ppOVar16 = &(pGVar1->fields).__2__current;
            *ppOVar16 = pOVar15;
            func_?(ppOVar16,pOVar15);
            (pGVar1->fields).__1__state = 2;
            return 1;
          }
        }
      }
    }
    else if (pRVar5 != (RectTransform *)0x0) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_10._0_4_ = (pGVar2->fields).startSize.x;
      uStack_10._4_4_ = (pGVar2->fields).startSize.y;
      fStack_13 = (pGVar2->fields).startSize.z;
      puVar8 = (undefined8 *)func_?(&VStack_9,0);
      uStack_6._0_4_ = (float)*puVar8;
      fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_6._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
      fVar11 = (float)uStack_10 + (float)uStack_6 * fVar3;
      fVar12 = uStack_10._4_4_ + uStack_6._4_4_ * fVar3;
      uStack_6 = CONCAT44(fVar12,fVar11);
      fStack_7 = fStack_13 + *(float *)(puVar8 + 1) * fVar3;
      unaff_EBX = (Transform *)0x0;
      if (pTVar14 != (Transform *)0x0) {
        value.y = fVar12;
        value.x = fVar11;
        value.z = fStack_7;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar14,value,(MethodInfo *)0x0);
        this = (GameMeterUpdatedEffect_AnimateScale_d_6 *)0x0;
        pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
        ppOVar16 = &(pGVar1->fields).__2__current;
        *ppOVar16 = pOVar15;
        func_?(ppOVar16,pOVar15);
        (pGVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  pGVar17 = (GameMeterUpdatedEffect__Class *)func_?();
  puVar18 = &pGVar17[0x60a203]._1.packingSize;
  *puVar18 = *puVar18 + (char)unaff_EBX + -1 + (pGVar17 < pGVar2->klass);
  uVar19 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar19);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar19 = func_?(&
                           MethodInfo__GameMeterVisuals__GameMeterUpdatedEffect___AnimateScale_d__6__System_Collections_IEnumerator_Reset__
                          );
  func_?(this_00,uVar19);
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
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


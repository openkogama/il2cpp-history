
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
        fVar13 = uStack_7._4_4_ + uStack_11._4_4_ * fVar3;
        uStack_11 = CONCAT44(fVar13,fVar12);
        fStack_14 = fStack_8 + *(float *)(puVar9 + 1) * fVar3;
        if (pTVar6 != (Transform *)0x0) {
          value_00.y = fVar13;
          value_00.x = fVar12;
          value_00.z = fStack_14;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar6,value_00,(MethodInfo *)0x0);
          (pGVar1->fields)._i_5__2 = 0.0;
code_?:
          fVar3 = (pGVar2->fields).scaleTime;
          pfVar4 = &(pGVar1->fields)._i_5__2;
          pRVar5 = (pGVar2->fields).scaleTarget;
          if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
            if ((pRVar5 != (RectTransform *)0x0) &&
               (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pRVar5,(MethodInfo *)0x0),
               pTVar6 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar6,(pGVar2->fields).startSize,(MethodInfo *)0x0);
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
                  (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pRVar5,(MethodInfo *)0x0),
                  pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      (&VStack_10,pTVar6,(MethodInfo *)0x0);
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
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pRVar5,(MethodInfo *)0x0);
      uStack_11._0_4_ = (pGVar2->fields).startSize.x;
      uStack_11._4_4_ = (pGVar2->fields).startSize.y;
      fStack_14 = (pGVar2->fields).startSize.z;
      puVar9 = (undefined8 *)func_?(&VStack_10,0);
      uStack_7._0_4_ = (float)*puVar9;
      fVar3 = ((pGVar1->fields)._i_5__2 / (pGVar2->fields).scaleTime) *
               (pGVar2->fields).scaleStrength;
      uStack_7._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
      fVar12 = (float)uStack_11 + (float)uStack_7 * fVar3;
      fVar13 = uStack_11._4_4_ + uStack_7._4_4_ * fVar3;
      uStack_7 = CONCAT44(fVar13,fVar12);
      fStack_8 = fStack_14 + *(float *)(puVar9 + 1) * fVar3;
      if (pTVar6 != (Transform *)0x0) {
        value.y = fVar13;
        value.x = fVar12;
        value.z = fStack_8;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar6,value,(MethodInfo *)0x0);
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
  bVar17 = func_?();
  return bVar17;
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


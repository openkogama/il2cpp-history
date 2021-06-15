
/* Void Dispose() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>c__Iterator0::
     GameMeterUpdatedEffect_AnimateScale_c_Iterator0_Dispose
               (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>c__Iterator0::
     GameMeterUpdatedEffect_AnimateScale_c_Iterator0_MoveNext
               (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  pGVar3 = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)0x0;
  switch(iVar2) {
  case 0:
    goto code_?;
  case 1:
    break;
  case 2:
    this = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)(this->fields)._i___2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    this = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)(fVar4 + (float)this);
    pGVar3 = this;
    goto code_?;
  default:
    return 0;
  }
  this = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)(this->fields)._i___1;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pGVar3 = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)(fVar4 + (float)this);
  this = pGVar3;
code_?:
  (pGVar1->fields)._i___1 = (float)pGVar3;
  pGVar5 = (pGVar1->fields)._this;
  if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
    fVar4 = (pGVar5->fields).scaleTime;
    if (fVar4 < (pGVar1->fields)._i___1 || fVar4 == (pGVar1->fields)._i___1) {
      if ((pGVar5 != (GameMeterUpdatedEffect *)0x0) &&
         (pRVar6 = (pGVar5->fields).scaleTarget, pRVar6 != (RectTransform *)0x0)) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pRVar6,(MethodInfo *)0x0);
        pGVar5 = (pGVar1->fields)._this;
        if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
          uStack_8._0_4_ = (pGVar5->fields).startSize.x;
          uStack_8._4_4_ = (pGVar5->fields).startSize.y;
          fVar4 = (pGVar5->fields).startSize.z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             (&VStack_10,(MethodInfo *)0x0);
          pGVar5 = (pGVar1->fields)._this;
          if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               (&VStack_10,*pVVar9,(pGVar5->fields).scaleStrength,(MethodInfo *)0x0)
            ;
            a_00.z = fVar4;
            a_00.x = (float)(undefined4)uStack_8;
            a_00.y = (float)uStack_8._4_4_;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               (&VStack_10,a_00,*pVVar9,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar7,*pVVar9,(MethodInfo *)0x0);
              pGVar3 = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)0x0;
code_?:
              (pGVar1->fields)._i___2 = (float)pGVar3;
              pGVar5 = (pGVar1->fields)._this;
              if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
                fVar4 = (pGVar5->fields).scaleTime;
                pfVar11 = &(pGVar1->fields)._i___2;
                if (fVar4 < *pfVar11 || fVar4 == *pfVar11) {
                  if ((pGVar5 != (GameMeterUpdatedEffect *)0x0) &&
                     (pRVar6 = (pGVar5->fields).scaleTarget, pRVar6 != (RectTransform *)0x0)) {
                    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_transform((Component_1 *)pRVar6,(MethodInfo *)0x0);
                    pGVar5 = (pGVar1->fields)._this;
                    if ((pGVar5 != (GameMeterUpdatedEffect *)0x0) && (pTVar7 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar7,(pGVar5->fields).startSize,(MethodInfo *)0x0);
                      this = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)0x0;
                      pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&this);
                      (pGVar1->fields)._current = pOVar12;
                      if ((pGVar1->fields)._disposing == 0) {
                        (pGVar1->fields)._PC = 3;
                      }
                      return 1;
                    }
                  }
                }
                else if (((pGVar5 != (GameMeterUpdatedEffect *)0x0) &&
                         (pRVar6 = (pGVar5->fields).scaleTarget, pRVar6 != (RectTransform *)0x0)) &&
                        (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_transform((Component_1 *)pRVar6,(MethodInfo *)0x0)
                        , pTVar7 != (Transform *)0x0)) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localScale(&VStack_10,pTVar7,(MethodInfo *)0x0);
                  uStack_8._0_4_ = pVVar9->x;
                  uStack_8._4_4_ = pVVar9->y;
                  fVar4 = pVVar9->z;
                  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
                    VStack_10.z = (float)TypeInfo__UnityEngine__Vector2;
                    VStack_10.y = (float)&UNK_?;
                    func_?();
                  }
                  v.z = fVar4;
                  v.x = (float)(undefined4)uStack_8;
                  v.y = (float)uStack_8._4_4_;
                  a_01 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                                   (v,(MethodInfo *)0x0);
                  pGVar5 = (pGVar1->fields)._this;
                  if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
                    b = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                                  ((pGVar5->fields).startSize,(MethodInfo *)0x0);
                    pGVar5 = (pGVar1->fields)._this;
                    if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_Lerp
                                (a_01,b,(pGVar1->fields)._i___2 / (pGVar5->fields).scaleTime,
                                 (MethodInfo *)0x0);
                      this = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)0x0;
                      pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&this);
                      (pGVar1->fields)._current = pOVar12;
                      if ((pGVar1->fields)._disposing != 0) {
                        return 1;
                      }
                      (pGVar1->fields)._PC = 2;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ((pGVar5 != (GameMeterUpdatedEffect *)0x0) &&
            (pRVar6 = (pGVar5->fields).scaleTarget, pRVar6 != (RectTransform *)0x0)) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pRVar6,(MethodInfo *)0x0);
      pGVar5 = (pGVar1->fields)._this;
      if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
        uStack_8._0_4_ = (pGVar5->fields).startSize.x;
        uStack_8._4_4_ = (pGVar5->fields).startSize.y;
        fVar4 = (pGVar5->fields).startSize.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                           (&VStack_10,(MethodInfo *)0x0);
        pGVar5 = (pGVar1->fields)._this;
        if (pGVar5 != (GameMeterUpdatedEffect *)0x0) {
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             (&VStack_10,*pVVar9,
                              ((pGVar1->fields)._i___1 / (pGVar5->fields).scaleTime) *
                              (pGVar5->fields).scaleStrength,(MethodInfo *)0x0);
          a.z = fVar4;
          a.x = (float)(undefined4)uStack_8;
          a.y = (float)uStack_8._4_4_;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_10,a,*pVVar9,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar7,*pVVar9,(MethodInfo *)0x0);
            this = (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *)0x0;
            pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pGVar1->fields)._current = pOVar12;
            if ((pGVar1->fields)._disposing != 0) {
              return 1;
            }
            (pGVar1->fields)._PC = 1;
            return 1;
          }
        }
      }
    }
  }
  uVar13 = func_?(0);
  out(0xe7,uVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::GameMeterUpdatedEffect+<AnimateScale>c__Iterator0::
     GameMeterUpdatedEffect_AnimateScale_c_Iterator0_Reset
               (GameMeterUpdatedEffect_AnimateScale_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_OnDestroy
               (PickupParticleScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).itemAttachedTo;
  if (pPVar1 != (PickupItem *)0x0) {
    pMVar2 = (pPVar1->fields).owner;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pPVar1 = (this->fields).itemAttachedTo;
    if (((pPVar1 != (PickupItem *)0x0) &&
        (pMVar2 = (pPVar1->fields).owner, pMVar2 != (MVPickupOwner *)0x0)) &&
       (pMVar4 = (pMVar2->fields)._.worldObjectParent, pMVar4 != (MVWorldObjectClient *)0x0)) {
      pUVar5 = (pMVar4->fields).ScaleChanged;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                               );
      unaff_EBX = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0;
      if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pUStack6 =
             (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar5,(Delegate *)this_00,(MethodInfo *)0x0);
        unaff_EBX = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
        if (pUStack6 ==
            (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0) {
          (pMVar4->fields).ScaleChanged =
               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          func_?();
          return;
        }
        pUStack6 =
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
        pUVar5 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
        if (pUVar5 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
          (pMVar4->fields).ScaleChanged = pUVar5;
          unaff_EBX = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          pUStack6 =
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
          ;
          pUStack6 =
               (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)func_?();
          if (pUStack6 !=
              (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0) {
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  pUStack6 = unaff_EBX;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnScaleChange(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_OnScaleChange
               (PickupParticleScaler *this,MVWorldObjectClient *obj,ScaleChangedEventArgs *args,
               MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
              ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
    this_00 = (this->fields).particleSysToScale;
    if (this_00 != (ParticleSystem *)0x0) {
      value = 0.0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
      _unity_self = (ParticleSystem_MainModule *)&stack0xfffffff4;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                (_unity_self,value,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff4,(float)_unity_self,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_Start
               (PickupParticleScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).particleSysToScale;
  if (this_00 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (this_00,(MethodInfo *)0x0);
    pPVar1 = (this->fields).itemAttachedTo;
    if (pPVar1 != (PickupItem *)0x0) {
      pMVar2 = (pPVar1->fields).owner;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pPVar1 = (this->fields).itemAttachedTo;
      if (((pPVar1 != (PickupItem *)0x0) &&
          (pMVar2 = (pPVar1->fields).owner, pMVar2 != (MVPickupOwner *)0x0)) &&
         (pMVar4 = (pMVar2->fields)._.worldObjectParent, pMVar4 != (MVWorldObjectClient *)0x0)) {
        pUVar5 = (pMVar4->fields).ScaleChanged;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        unaff_EBX = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0;
        if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          this = (PickupParticleScaler *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar5,(Delegate *)this_01,(MethodInfo *)0x0);
          unaff_EBX = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          if ((Delegate *)this == (Delegate *)0x0) {
            (pMVar4->fields).ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
            pDStack6 = (Delegate *)&(pMVar4->fields).ScaleChanged;
            pUStack7 =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)this;
            func_?();
            return;
          }
          pUStack7 =
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
          ;
          pDStack6 = (Delegate *)this;
          pUVar5 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
          if (pUVar5 != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
            (pMVar4->fields).ScaleChanged = pUVar5;
            unaff_EBX = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
            pUStack7 =
                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
            ;
            pDStack6 = (Delegate *)this;
            pUStack7 =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                 func_?();
            if (pUStack7 !=
                (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0) {
              pDStack6 = (Delegate *)&(pMVar4->fields).ScaleChanged;
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  pDStack6 = (Delegate *)this;
  pUStack7 = unaff_EBX;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



/* Void Initialize(MVTeleportGroup) */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_Initialize
               (TeleportGroup *this,MVTeleportGroup *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).worldObject = owner;
  if (owner != (MVTeleportGroup *)0x0) {
    MVar1 = MVVehicleBase::MVVehicleBase_get_DocumentationType
                      ((MVVehicleBase *)owner,(MethodInfo *)0x0);
    if (MVar1 != MVWorldObjectDocumentationType__Enum_Missing) {
      a = *(Delegate **)
           (MVar1 + (MVWorldObjectDocumentationType__Enum_ShootableButton|
                    MVWorldObjectDocumentationType__Enum_Text));
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         (a,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar3->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar4 = pUVar3;
        }
        pUVar5 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)
       (MVar1 + (MVWorldObjectDocumentationType__Enum_ShootableButton|
                MVWorldObjectDocumentationType__Enum_Text)) = pUVar4;
      pMVar6 = (this->fields).worldObject;
      if (pMVar6 != (MVTeleportGroup *)0x0) {
        pMVar7 = MVTeleportGroup::MVTeleportGroup_get_Teleporter2(pMVar6,(MethodInfo *)0x0);
        if (pMVar7 != (MVTeleporter *)0x0) {
          pUVar4 = (pMVar7->fields)._._.PositionChanged;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                     ,
                     MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                    );
          pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
          pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            if (pUVar3->klass ==
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
               ) {
              pUVar4 = pUVar3;
            }
            pUVar5 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
            goto code_?;
          }
          (pMVar7->fields)._._.PositionChanged = pUVar4;
          pMVar6 = (this->fields).worldObject;
          if (pMVar6 != (MVTeleportGroup *)0x0) {
            pUVar4 = (pMVar6->fields)._._._.PositionChanged;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                       ,
                       MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                      );
            pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pUVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
            pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              if (pUVar3->klass ==
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 ) {
                pUVar4 = pUVar3;
              }
              pUVar5 = 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
              ;
              if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
              goto code_?;
            }
            (pMVar6->fields)._._._.PositionChanged = pUVar4;
            this_00 = (MVVehicleBase *)(this->fields).worldObject;
            pLVar8 = (this->fields).lineRenderer;
            if (this_00 != (MVVehicleBase *)0x0) {
              piVar9 = (int *)MVVehicleBase::MVVehicleBase_get_DocumentationType
                                        (this_00,(MethodInfo *)0x0);
              if (piVar9 != (int *)0x0) {
                pVVar10 = (Vector3 *)
                          (**(code **)(*piVar9 + 0x188))
                                    (auStack_11,piVar9,*(undefined4 *)(*piVar9 + 0x18c));
                if (pLVar8 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                            (pLVar8,0,*pVVar10,(MethodInfo *)0x0);
                  pMVar6 = (this->fields).worldObject;
                  pLVar8 = (this->fields).lineRenderer;
                  if (pMVar6 != (MVTeleportGroup *)0x0) {
                    pMVar7 = MVTeleportGroup::MVTeleportGroup_get_Teleporter2
                                       (pMVar6,(MethodInfo *)0x0);
                    if (pMVar7 != (MVTeleporter *)0x0) {
                      pVVar10 = (Vector3 *)
                                (*(code *)(pMVar7->klass->vtable).get_WorldPosition_1.method)
                                          (auStack_11,pMVar7,
                                           (pMVar7->klass->vtable).set_WorldPosition.methodPtr);
                      if (pLVar8 != (LineRenderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_SetPosition(pLVar8,1,*pVVar10,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pUVar3 = extraout_ECX;
  pUVar5 = extraout_EDX;
code_?:
  func_?(pUVar3,pUVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_OnDestroy
               (TeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVVehicleBase *)(this->fields).worldObject;
  if (this_00 == (MVVehicleBase *)0x0) {
    return;
  }
  MVar1 = MVVehicleBase::MVVehicleBase_get_DocumentationType(this_00,(MethodInfo *)0x0);
  if (MVar1 != MVWorldObjectDocumentationType__Enum_Missing) {
    source = *(Delegate **)
              (MVar1 + (MVWorldObjectDocumentationType__Enum_ShootableButton|
                       MVWorldObjectDocumentationType__Enum_Text));
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       (source,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUVar3->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar4 = pUVar3;
      }
      pUVar5 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)
     (MVar1 + (MVWorldObjectDocumentationType__Enum_ShootableButton|
              MVWorldObjectDocumentationType__Enum_Text)) = pUVar4;
    this_01 = (this->fields).worldObject;
    if ((this_01 != (MVTeleportGroup *)0x0) &&
       (pMVar6 = MVTeleportGroup::MVTeleportGroup_get_Teleporter2(this_01,(MethodInfo *)0x0),
       pMVar6 != (MVTeleporter *)0x0)) {
      pUVar4 = (pMVar6->fields)._._.PositionChanged;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
        (pMVar6->fields)._._.PositionChanged = pUVar4;
        return;
      }
      if (pUVar3->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar4 = pUVar3;
      }
      pUVar5 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pUVar4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pUVar3 = extraout_ECX;
  pUVar5 = extraout_EDX;
code_?:
  func_?(pUVar3,pUVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_PositionChanged
               (TeleportGroup *this,Object *sender,PositionChangedEventArgs *args,MethodInfo *method
               )

{
  this_00 = (MVVehicleBase *)(this->fields).worldObject;
  if ((MVVehicleBase *)sender == this_00) {
    pLVar1 = (this->fields).lineRenderer;
    if (((this_00 != (MVVehicleBase *)0x0) &&
        (piVar2 = (int *)MVVehicleBase::MVVehicleBase_get_DocumentationType
                                   (this_00,(MethodInfo *)0x0), piVar2 != (int *)0x0)) &&
       (pVVar3 = (Vector3 *)
                 (**(code **)(*piVar2 + 0x188))(auStack_4,piVar2,*(undefined4 *)(*piVar2 + 0x18c)),
       pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar1,0,*pVVar3,(MethodInfo *)0x0);
      pMVar5 = (this->fields).worldObject;
      pLVar1 = (this->fields).lineRenderer;
      if (((pMVar5 != (MVTeleportGroup *)0x0) &&
          (pMVar6 = MVTeleportGroup::MVTeleportGroup_get_Teleporter2(pMVar5,(MethodInfo *)0x0),
          pMVar6 != (MVTeleporter *)0x0)) &&
         (pVVar3 = (Vector3 *)
                   (*(code *)(pMVar6->klass->vtable).get_WorldPosition_1.method)
                             (auStack_4,pMVar6,(pMVar6->klass->vtable).set_WorldPosition.methodPtr)
         , pLVar1 != (LineRenderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar1,1,*pVVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (this_00 != (MVVehicleBase *)0x0) {
    pOVar7 = (Object *)MVVehicleBase::MVVehicleBase_get_DocumentationType(this_00,(MethodInfo *)0x0)
    ;
    if (sender == pOVar7) {
      index = 0;
    }
    else {
      pMVar5 = (this->fields).worldObject;
      if (pMVar5 == (MVTeleportGroup *)0x0) goto code_?;
      pMVar6 = MVTeleportGroup::MVTeleportGroup_get_Teleporter2(pMVar5,(MethodInfo *)0x0);
      if ((MVTeleporter *)sender != pMVar6) {
        return;
      }
      index = 1;
    }
    if ((args != (PositionChangedEventArgs *)0x0) &&
       (pLVar1 = (this->fields).lineRenderer, pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar1,index,(args->fields).NewPos,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


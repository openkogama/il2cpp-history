
/* Void Initialize(MVTeleportGroup) */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_Initialize
               (TeleportGroup *this,MVTeleportGroup *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  (this->fields).worldObject = owner;
  func_?(&(this->fields).worldObject,owner);
  pMVar1 = (this->fields).worldObject;
  this_00 = (MVTeleporter *)0x0;
  if ((pMVar1 == (MVTeleportGroup *)0x0) ||
     (this_00 = (pMVar1->fields).teleporter1, this_00 == (MVTeleporter *)0x0)) {
code_?:
    func_?();
  }
  else {
    pUVar2 = (this_00->fields)._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    unaff_EBX = (MVTeleportGroup *)0x0;
    if (pUVar3 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    unaff_EBX = (MVTeleportGroup *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (unaff_EBX == (MVTeleportGroup *)0x0) {
      (this_00->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pMStack_4 = (MVTeleporter *)unaff_EBX;
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this_00->fields)._._.PositionChanged = pUVar2;
      pMStack_4 = (MVTeleporter *)unaff_EBX;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    pMStack_4 = (MVTeleporter *)&(this_00->fields)._._.PositionChanged;
    func_?();
    pMVar1 = (this->fields).worldObject;
    this_00 = (MVTeleporter *)0x0;
    if ((pMVar1 == (MVTeleportGroup *)0x0) ||
       (this_00 = (pMVar1->fields).teleporter2, this_00 == (MVTeleporter *)0x0))
    goto code_?;
    pUVar2 = (this_00->fields)._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    unaff_EBX = (MVTeleportGroup *)0x0;
    if (pUVar3 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    unaff_EBX = (MVTeleportGroup *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (unaff_EBX == (MVTeleportGroup *)0x0) {
      (this_00->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pMStack_4 = (MVTeleporter *)unaff_EBX;
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this_00->fields)._._.PositionChanged = pUVar2;
      pMStack_4 = (MVTeleporter *)unaff_EBX;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    pMStack_4 = (MVTeleporter *)&(this_00->fields)._._.PositionChanged;
    func_?();
    unaff_EBX = (this->fields).worldObject;
    if (unaff_EBX == (MVTeleportGroup *)0x0) goto code_?;
    pUVar2 = (unaff_EBX->fields)._._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    this_00 = (MVTeleporter *)0x0;
    if (pUVar3 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    this_00 = (MVTeleporter *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (this_00 == (MVTeleporter *)0x0) {
      (unaff_EBX->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      pMStack_4 = (MVTeleporter *)&(unaff_EBX->fields)._._._.PositionChanged;
      func_?();
      pMVar1 = (this->fields).worldObject;
      this_00 = (MVTeleporter *)(this->fields).lineRenderer;
      if ((pMVar1 != (MVTeleportGroup *)0x0) &&
         (pMVar6 = (pMVar1->fields).teleporter1, pMVar6 != (MVTeleporter *)0x0)) {
        pVVar7 = (Vector3 *)
                 (*(pMVar6->klass->vtable).get_WorldPosition_1.methodPtr)
                           (auStack_8,pMVar6,(pMVar6->klass->vtable).get_WorldPosition_1.method);
        if (this_00 != (MVTeleporter *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    ((LineRenderer *)this_00,0,*pVVar7,(MethodInfo *)0x0);
          pMVar1 = (this->fields).worldObject;
          this_00 = (MVTeleporter *)(this->fields).lineRenderer;
          if ((pMVar1 != (MVTeleportGroup *)0x0) &&
             (pMVar6 = (pMVar1->fields).teleporter2, pMVar6 != (MVTeleporter *)0x0)) {
            pVVar7 = (Vector3 *)
                     (*(pMVar6->klass->vtable).get_WorldPosition_1.methodPtr)
                               (auStack_8,pMVar6,(pMVar6->klass->vtable).get_WorldPosition_1.method
                               );
            if (this_00 != (MVTeleporter *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        ((LineRenderer *)this_00,1,*pVVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pMStack_4 = this_00;
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (unaff_EBX->fields)._._._.PositionChanged = pUVar2;
      pMStack_4 = this_00;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
    }
  }
  pMStack_4 = this_00;
  func_?();
code_?:
  pMStack_4 = (MVTeleporter *)unaff_EBX;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_OnDestroy
               (TeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).worldObject == (MVTeleportGroup *)0x0) {
    return;
  }
  pMVar1 = (((this->fields).worldObject)->fields).teleporter1;
  if (pMVar1 == (MVTeleporter *)0x0) {
code_?:
    func_?();
  }
  else {
    pUVar2 = (pMVar1->fields)._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    if (pUVar3 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar1->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (pMVar1->fields)._._.PositionChanged = pUVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pMVar6 = (this->fields).worldObject;
    if ((pMVar6 == (MVTeleportGroup *)0x0) ||
       (pMVar1 = (pMVar6->fields).teleporter2, pMVar1 == (MVTeleporter *)0x0))
    goto code_?;
    pUVar2 = (pMVar1->fields)._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    if (pUVar3 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar1->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      func_?();
      return;
    }
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (pMVar1->fields)._._.PositionChanged = pUVar2;
      iVar5 = func_?();
      if (iVar5 != 0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_PositionChanged
               (TeleportGroup *this,Object *sender,PositionChangedEventArgs *args,MethodInfo *method
               )

{
  pMVar1 = (this->fields).worldObject;
  if ((MVTeleportGroup *)sender == pMVar1) {
    pLVar2 = (this->fields).lineRenderer;
    if (((pMVar1 != (MVTeleportGroup *)0x0) &&
        (pMVar3 = (pMVar1->fields).teleporter1, pMVar3 != (MVTeleporter *)0x0)) &&
       (pVVar4 = (Vector3 *)
                 (*(pMVar3->klass->vtable).get_WorldPosition_1.methodPtr)
                           (auStack_5,pMVar3,(pMVar3->klass->vtable).get_WorldPosition_1.method),
       pLVar2 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar2,0,*pVVar4,(MethodInfo *)0x0);
      pMVar1 = (this->fields).worldObject;
      pLVar2 = (this->fields).lineRenderer;
      if (((pMVar1 != (MVTeleportGroup *)0x0) &&
          (pMVar3 = (pMVar1->fields).teleporter2, pMVar3 != (MVTeleporter *)0x0)) &&
         (pVVar4 = (Vector3 *)
                   (*(pMVar3->klass->vtable).get_WorldPosition_1.methodPtr)
                             (auStack_5,pMVar3,(pMVar3->klass->vtable).get_WorldPosition_1.method),
         pLVar2 != (LineRenderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                  (pLVar2,1,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (pMVar1 != (MVTeleportGroup *)0x0) {
    if ((MVTeleporter *)sender == (pMVar1->fields).teleporter1) {
      index = 0;
    }
    else {
      if ((MVTeleporter *)sender != (pMVar1->fields).teleporter2) {
        return;
      }
      index = 1;
    }
    if ((args != (PositionChangedEventArgs *)0x0) &&
       (pLVar2 = (this->fields).lineRenderer, pLVar2 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar2,index,(args->fields).NewPos,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


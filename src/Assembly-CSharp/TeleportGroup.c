
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
  if (pMVar1 == (MVTeleportGroup *)0x0) {
code_?:
    pUVar2 = unaff_EDI;
    func_?();
code_?:
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)unaff_ESI;
    func_?();
    unaff_EDI = pUVar2;
code_?:
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)unaff_ESI;
    func_?();
  }
  else {
    pMVar4 = (pMVar1->fields).teleporter1;
    if (pMVar4 == (MVTeleporter *)0x0) goto code_?;
    pUVar5 = (pMVar4->fields)._._.PositionChanged;
    pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar6,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    unaff_EDI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
    if (unaff_EDI == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
      (pMVar4->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  &(pMVar4->fields)._._.PositionChanged;
      func_?();
      pMVar1 = (this->fields).worldObject;
      unaff_ESI = pMVar4;
      if (pMVar1 == (MVTeleportGroup *)0x0) goto code_?;
      pMVar4 = (pMVar1->fields).teleporter2;
      if (pMVar4 == (MVTeleporter *)0x0) goto code_?;
      pUVar5 = (pMVar4->fields)._._.PositionChanged;
      pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_EDI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
      if (unaff_EDI == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
        (pMVar4->fields)._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUStack_3 = unaff_EDI;
        pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        (pMVar4->fields)._._.PositionChanged = pUVar5;
        pUStack_3 = unaff_EDI;
        iVar7 = func_?();
        if (iVar7 == 0) goto code_?;
      }
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  &(pMVar4->fields)._._.PositionChanged;
      func_?();
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
               (this->fields).worldObject;
      unaff_ESI = pMVar4;
      if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
      a = (Delegate *)(pUVar2->_1).initializationExceptionGCHandle;
      pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar6,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_ESI = (MVTeleporter *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            (a,(Delegate *)pUVar6,(MethodInfo *)0x0);
      unaff_EDI = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (unaff_ESI == (MVTeleporter *)0x0) {
        (pUVar2->_1).initializationExceptionGCHandle = 0;
code_?:
        pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                    &(pUVar2->_1).initializationExceptionGCHandle;
        func_?();
        pMVar1 = (this->fields).worldObject;
        unaff_ESI = (MVTeleporter *)(this->fields).lineRenderer;
        unaff_EDI = pUVar2;
        if ((pMVar1 != (MVTeleportGroup *)0x0) &&
           (pMVar4 = (pMVar1->fields).teleporter1, pMVar4 != (MVTeleporter *)0x0)) {
          pVVar8 = (Vector3 *)
                   (*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)
                             (auStack_9,pMVar4,(pMVar4->klass->vtable).set_WorldPosition.methodPtr)
          ;
          if (unaff_ESI != (MVTeleporter *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_ESI,0,*pVVar8,(MethodInfo *)0x0);
            pMVar1 = (this->fields).worldObject;
            unaff_ESI = (MVTeleporter *)(this->fields).lineRenderer;
            if ((pMVar1 != (MVTeleportGroup *)0x0) &&
               (pMVar4 = (pMVar1->fields).teleporter2, pMVar4 != (MVTeleporter *)0x0)) {
              pVVar8 = (Vector3 *)
                       (*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)
                                 (auStack_9,pMVar4,
                                  (pMVar4->klass->vtable).set_WorldPosition.methodPtr);
              if (unaff_ESI != (MVTeleporter *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                          ((LineRenderer *)unaff_ESI,1,*pVVar8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)unaff_ESI;
      uVar10 = func_?();
      if (uVar10 != 0) {
        (pUVar2->_1).initializationExceptionGCHandle = uVar10;
        pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)unaff_ESI;
        iVar7 = func_?();
        if (iVar7 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pUStack_3 = unaff_EDI;
    pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (pMVar4->fields)._._.PositionChanged = pUVar5;
    pUStack_3 = unaff_EDI;
    iVar7 = func_?();
    if (iVar7 != 0) goto code_?;
  }
code_?:
  pUStack_3 = unaff_EDI;
  func_?();
code_?:
  pUStack_3 = unaff_EDI;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
code_?:
    func_?();
  }
  else {
    pUVar2 = (pMVar1->fields)._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
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
      object = (Object *)0x0;
code_?:
      func_?();
      pMVar5 = (this->fields).worldObject;
      if ((pMVar5 == (MVTeleportGroup *)0x0) ||
         (pMVar1 = (pMVar5->fields).teleporter2, pMVar1 == (MVTeleporter *)0x0))
      goto code_?;
      pUVar2 = (pMVar1->fields)._._.PositionChanged;
      pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar3,object,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
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
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (pMVar1->fields)._._.PositionChanged = pUVar2;
    object = (Object *)func_?();
    if (object != (Object *)0x0) goto code_?;
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
                 (*(code *)(pMVar3->klass->vtable).get_WorldPosition_1.method)
                           (auStack_5,pMVar3,(pMVar3->klass->vtable).set_WorldPosition.methodPtr),
       pLVar2 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (pLVar2,0,*pVVar4,(MethodInfo *)0x0);
      pMVar1 = (this->fields).worldObject;
      pLVar2 = (this->fields).lineRenderer;
      if (((pMVar1 != (MVTeleportGroup *)0x0) &&
          (pMVar3 = (pMVar1->fields).teleporter2, pMVar3 != (MVTeleporter *)0x0)) &&
         (pVVar4 = (Vector3 *)
                   (*(code *)(pMVar3->klass->vtable).get_WorldPosition_1.method)
                             (auStack_5,pMVar3,(pMVar3->klass->vtable).set_WorldPosition.methodPtr)
         , pLVar2 != (LineRenderer *)0x0)) {
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



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
  ppMVar1 = &(this->fields).worldObject;
  *ppMVar1 = owner;
  func_?(ppMVar1,owner);
  if (*ppMVar1 == (MVTeleportGroup *)0x0) {
code_?:
    func_?();
code_?:
    pDStack_2 = unaff_ESI;
    func_?();
code_?:
    pDStack_2 = unaff_ESI;
    func_?();
  }
  else {
    pMVar3 = ((*ppMVar1)->fields).teleporter1;
    if (pMVar3 == (MVTeleporter *)0x0) goto code_?;
    pUVar4 = (pMVar3->fields)._._.PositionChanged;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (unaff_ESI != (Delegate *)0x0) {
      pDStack_2 = unaff_ESI;
      pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (pMVar3->fields)._._.PositionChanged = pUVar4;
        pDStack_2 = unaff_ESI;
        iVar6 = func_?();
        if (iVar6 == 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    (pMVar3->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
    pDStack_2 = (Delegate *)&(pMVar3->fields)._._.PositionChanged;
    func_?();
    if (*ppMVar1 == (MVTeleportGroup *)0x0) goto code_?;
    pMVar3 = ((*ppMVar1)->fields).teleporter2;
    if (pMVar3 == (MVTeleporter *)0x0) goto code_?;
    pUVar4 = (pMVar3->fields)._._.PositionChanged;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (unaff_ESI == (Delegate *)0x0) {
      (pMVar3->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      pDStack_2 = (Delegate *)&(pMVar3->fields)._._.PositionChanged;
      func_?();
      pMVar7 = *ppMVar1;
      if (pMVar7 == (MVTeleportGroup *)0x0) goto code_?;
      pUVar4 = (pMVar7->fields)._._._.PositionChanged;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (unaff_ESI == (Delegate *)0x0) {
        (pMVar7->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
        pDStack_2 = (Delegate *)&(pMVar7->fields)._._._.PositionChanged;
        func_?();
        this_00 = (this->fields).lineRenderer;
        unaff_ESI = (Delegate *)this;
        if ((*ppMVar1 != (MVTeleportGroup *)0x0) &&
           (pMVar3 = ((*ppMVar1)->fields).teleporter1, pMVar3 != (MVTeleporter *)0x0)) {
          pVVar8 = (Vector3 *)
                   (*(code *)(pMVar3->klass->vtable).get_WorldPosition_1.method)
                             (auStack_9,pMVar3,(pMVar3->klass->vtable).set_WorldPosition.methodPtr)
          ;
          if (this_00 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (this_00,0,*pVVar8,(MethodInfo *)0x0);
            unaff_ESI = (Delegate *)(this->fields).lineRenderer;
            if ((*ppMVar1 != (MVTeleportGroup *)0x0) &&
               (pMVar3 = ((*ppMVar1)->fields).teleporter2, pMVar3 != (MVTeleporter *)0x0)) {
              pVVar8 = (Vector3 *)
                       (*(code *)(pMVar3->klass->vtable).get_WorldPosition_1.method)
                                 (auStack_9,pMVar3,
                                  (pMVar3->klass->vtable).set_WorldPosition.methodPtr);
              if (unaff_ESI != (Delegate *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                          ((LineRenderer *)unaff_ESI,1,*pVVar8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
      pDStack_2 = unaff_ESI;
      pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (pMVar7->fields)._._._.PositionChanged = pUVar4;
      pDStack_2 = unaff_ESI;
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
    pDStack_2 = unaff_ESI;
    pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (pMVar3->fields)._._.PositionChanged = pUVar4;
    pDStack_2 = unaff_ESI;
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  pDStack_2 = unaff_ESI;
  func_?();
code_?:
  pDStack_2 = unaff_ESI;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  pMVar1 = (this->fields).worldObject;
  if (pMVar1 == (MVTeleportGroup *)0x0) {
    return;
  }
  pMVar2 = (pMVar1->fields).teleporter1;
  if (pMVar2 == (MVTeleporter *)0x0) {
code_?:
    func_?();
  }
  else {
    pUVar3 = (pMVar2->fields)._._.PositionChanged;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pMVar2->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      object = (Object *)0x0;
code_?:
      func_?();
      pMVar1 = (this->fields).worldObject;
      if ((pMVar1 == (MVTeleportGroup *)0x0) ||
         (pMVar2 = (pMVar1->fields).teleporter2, pMVar2 == (MVTeleporter *)0x0))
      goto code_?;
      pUVar3 = (pMVar2->fields)._._.PositionChanged;
      ppUVar6 = &(pMVar2->fields)._._.PositionChanged;
      pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar4,object,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if (pDVar5 == (Delegate *)0x0) {
        *ppUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        func_?();
        return;
      }
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        *ppUVar6 = pUVar3;
        iVar7 = func_?();
        if (iVar7 != 0) {
          func_?();
          return;
        }
      }
    }
    else {
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (pMVar2->fields)._._.PositionChanged = pUVar3;
        object = (Object *)func_?();
        if (object == (Object *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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


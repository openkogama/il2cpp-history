
/* Void <>m__0(Int32) */

void Assembly-CSharp.dll::WorldNetwork+<CreateGameWorldFromQueryData>c__AnonStorey0::
     WorldNetwork_CreateGameWorldFromQueryData_c_AnonStorey0___m__0
               (WorldNetwork_CreateGameWorldFromQueryData_c_AnonStorey0 *this,int32_t rootId,
               MethodInfo *method)

{
  this_00 = (this->fields)._this;
  if ((this_00 != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)(this_00->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    root = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,rootId,(MethodInfo *)0x0);
    if (root != (MVWorldObjectClient *)0x0) {
      (*(code *)(root->klass->vtable).Initialize.method)
                (root,(root->klass->vtable).InitializeInventory.methodPtr);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pMVar1 = (MVWorldObjectClientManager *)(this_00->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      cubeModelPrototypeTerrain =
           (MVCubeModelPrototypeTerrain *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                     (pMVar1,
                      MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                     );
      pMVar1 = (MVWorldObjectClientManager *)(this_00->fields)._.worldObjectClientManager;
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        cubeModelFineGrainedTerrain =
             (MVCubeModelFineGrainedTerrain *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                       (pMVar1,
                        MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                       );
        instigatorActorNumber = &UNK_?;
        bytePacker = TypeInfo__RuntimeEventManagerNetwork;
        this_01 = (RuntimeEventManagerNetwork *)func_?();
        RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
                  (this_01,cubeModelPrototypeTerrain,cubeModelFineGrainedTerrain,(MethodInfo *)0x0);
        (this_00->fields)._.runtimeEventManagerNetwork = this_01;
        if (this_01 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_DeserializeRuntimeEvents
                    (this_01,(BytePacker *)bytePacker,(MethodInfo *)0x0);
          WorldNetwork::WorldNetwork_CreateQueryEvent
                    (this_00,root,(int32_t)instigatorActorNumber,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


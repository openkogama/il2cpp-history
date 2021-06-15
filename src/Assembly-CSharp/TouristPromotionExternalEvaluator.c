
/* Void Start() */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator::TouristPromotionExternalEvaluator_Start
               (TouristPromotionExternalEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).availablePromotions;
  pTVar2 = (this->fields).creyGamesPrefab;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pPVar3 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar3 != (PrefabPool *)0x0) {
    pMVar4 = PrefabPool::PrefabPool_get_MVCollectiblePrefab(pPVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVCollectibleObject *)0x0) {
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0);
      pSVar6 = (ScaleAnimationBase *)
               func_?(
                              TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef
                              );
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,in_stack_7);
      (pSVar6->fields)._._._._.m_CachedPtr = pTVar2;
      (pSVar6->fields).state = (int32_t)pIVar5;
      if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pSVar6,
                   MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                  );
        pTVar2 = (this->fields).customPromotionPrefab;
        pLVar1 = (this->fields).availablePromotions;
        pPVar3 = (PrefabPool *)
                 MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pPVar3 != (PrefabPool *)0x0) {
          method_00 = (MethodInfo *)&UNK_?;
          pMVar4 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab(pPVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVCollectibleObject *)0x0) {
            pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0);
            pSVar6 = (ScaleAnimationBase *)
                     func_?(
                                    TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef
                                    );
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,method_00);
            (pSVar6->fields)._._._._.m_CachedPtr = pTVar2;
            (pSVar6->fields).state = (int32_t)pIVar5;
            if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)
                          0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)pSVar6,
                         MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean TryGetExternalPromotion(TouristPromotion ByRef) */

bool Assembly-CSharp.dll::TouristPromotionExternalEvaluator::
     TouristPromotionExternalEvaluator_TryGetExternalPromotion
               (TouristPromotionExternalEvaluator *this,TouristPromotion **externalPromotion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *externalPromotion = (TouristPromotion *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).embedded == 0) {
      x = *externalPromotion;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
    return 0;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* TouristPromotionExternalEvaluator() */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator::TouristPromotionExternalEvaluator__ctor
               (TouristPromotionExternalEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__List__
            );
  (this->fields).availablePromotions =
       (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}



/* Void CalculateDragValues() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_CalculateDragValues
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Camera *focusCamera;
  Vector3__StaticFields *pVVar15;
  List_1_UnityEngine_GameObject_ *pLVar16;
  GizmoObjectVertexSnapSettings *pGVar17;
  code *pcVar18;
  Ray ray;
  undefined1 auVar19 [16];
  bool bVar20;
  Object *pOVar21;
  undefined1 (*pauVar22) [16];
  RTScene *this_00;
  XZGridRayHit *pXVar23;
  RTSceneGrid *this_01;
  XZGridCell *this_02;
  List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *this_03;
  int32_t index;
  VisualTreeAsset_UsingEntry *pVVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_28;
  float fStack_29;
  undefined1 auStack_30 [12];
  VisualTreeAsset_UsingEntry VStack_31;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    cRam_? = '\x01';
  }
  VStack_31.alias = (String *)0x0;
  VStack_31.path = (String *)0x0;
  VStack_31.asset = (VisualTreeAsset *)0x0;
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
  }
  pOVar21 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if (pOVar21 == (Object *)0x0) goto code_?;
  focusCamera = (Camera *)pOVar21[4].monitor;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar26 = (pVVar15->zeroVector).y;
  fVar25 = (pVVar15->zeroVector).z;
  (this->fields)._._relativeDragOffset.x = (pVVar15->zeroVector).x;
  (this->fields)._._relativeDragOffset.y = fVar26;
  (this->fields)._._relativeDragOffset.z = fVar25;
  pLVar16 = (this->fields)._destinationObjects;
  if (pLVar16 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
  if ((pLVar16->fields)._size == 0) {
code_?:
    pGVar17 = (this->fields)._settings;
    if (pGVar17 == (GizmoObjectVertexSnapSettings *)0x0) goto code_?;
    if ((pGVar17->fields)._canSnapToGrid == 0) goto code_?;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    }
    pOVar21 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar21 == (Object *)0x0) || (pOVar21[2].klass == (Object__Class *)0x0)) {
code_?:
      func_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pauVar22 = (undefined1 (*) [16])
               func_?(auStack_30,6,TypeInfo__RTG__IInputDevice,pOVar21[2].klass,focusCamera
                              );
    auVar19 = *pauVar22;
    VStack_31.path = (String *)*(undefined8 *)pauVar22[1];
    VStack_31.asset = (VisualTreeAsset *)((ulonglong)*(undefined8 *)pauVar22[1] >> 0x20);
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    }
    this_00 = (RTScene *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (this_00 == (RTScene *)0x0) goto code_?;
    ray.m_Direction.y = (float)VStack_31.path;
    ray._0_16_ = auVar19;
    ray.m_Direction.z = (float)VStack_31.asset;
    pXVar23 = RTScene::RTScene_RaycastSceneGridIfVisible(this_00,ray,(MethodInfo *)0x0);
    if (pXVar23 == (XZGridRayHit *)0x0) goto code_?;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTSceneGrid>);
    }
    this_01 = (RTSceneGrid *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTSceneGrid>__get_Get__);
    if (this_01 == (RTSceneGrid *)0x0) goto code_?;
    this_02 = RTSceneGrid::RTSceneGrid_CellFromWorldPoint
                        (this_01,(pXVar23->fields)._hitPoint,(MethodInfo *)0x0);
    if (this_02 == (XZGridCell *)0x0) goto code_?;
    this_03 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
              XZGridCell::XZGridCell_GetCenterAndCorners(this_02,(MethodInfo *)0x0);
    index = Vector3Ex::Vector3Ex_GetPointClosestToPoint
                      ((List_1_UnityEngine_Vector3_ *)this_03,(pXVar23->fields)._hitPoint,
                       (MethodInfo *)0x0);
    if (index < 0) goto code_?;
    if (this_03 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
    goto code_?;
    pVVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_31,this_03,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar2 = pVVar24->alias;
    uVar9 = pVVar24->path;
    uVar3 = (this->fields)._snapPivot.x;
    uVar10 = (this->fields)._snapPivot.y;
    fVar27 = (float)uVar2 - (float)uVar3;
    fVar26 = (float)uVar9 - (float)uVar10;
    fVar25 = (float)pVVar24->asset - (this->fields)._snapPivot.z;
  }
  else {
    pGVar17 = (this->fields)._settings;
    if (pGVar17 == (GizmoObjectVertexSnapSettings *)0x0) goto code_?;
    if ((pGVar17->fields)._canSnapToObjectVerts == 0) goto code_?;
    bVar20 = GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
                       (this,focusCamera,
                        (IEnumerable_1_UnityEngine_GameObject_ *)(this->fields)._destinationObjects,
                        (Vector3 *)&VStack_31,(MethodInfo *)0x0);
    if (bVar20 == 0) goto code_?;
    uVar1 = (this->fields)._snapPivot.x;
    uVar8 = (this->fields)._snapPivot.y;
    fVar27 = (float)VStack_31.alias - (float)uVar1;
    fVar26 = (float)VStack_31.path - (float)uVar8;
    fVar25 = (float)VStack_31.asset - (this->fields)._snapPivot.z;
  }
  (this->fields)._._relativeDragOffset.x = fVar27;
  (this->fields)._._relativeDragOffset.y = fVar26;
  (this->fields)._._relativeDragOffset.z = fVar25;
code_?:
  uVar4 = (this->fields)._snapPivot.x;
  uVar11 = (this->fields)._snapPivot.y;
  fVar25 = (this->fields)._snapPivot.z;
  uVar5 = (this->fields)._._relativeDragOffset.x;
  uVar12 = (this->fields)._._relativeDragOffset.y;
  fVar26 = (this->fields)._._relativeDragOffset.z;
  uVar6 = (this->fields)._._totalDragOffset.x;
  uVar13 = (this->fields)._._totalDragOffset.y;
  (this->fields)._snapPivot.x = (float)uVar5 + (float)uVar4;
  (this->fields)._snapPivot.y = (float)uVar12 + (float)uVar11;
  uVar7 = (this->fields)._._relativeDragOffset.x;
  uVar14 = (this->fields)._._relativeDragOffset.y;
  (this->fields)._snapPivot.z = fVar26 + fVar25;
  fVar25 = (this->fields)._._totalDragOffset.z;
  fVar26 = (this->fields)._._relativeDragOffset.z;
  (this->fields)._._totalDragOffset.x = (float)uVar7 + (float)uVar6;
  (this->fields)._._totalDragOffset.y = (float)uVar14 + (float)uVar13;
  (this->fields)._._totalDragOffset.z = fVar26 + fVar25;
  return;
}


/* Boolean CanUseObjectAsSnapDestination(GameObject) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_CanUseObjectAsSnapDestination
               (GizmoObjectVertexSnapDrag3D *this,GameObject *gameObject,MethodInfo *method)

{
  pGVar1 = (this->fields)._settings;
  if (gameObject != (GameObject *)0x0) {
    layerNumber = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (gameObject,(MethodInfo *)0x0);
    if (pGVar1 != (GizmoObjectVertexSnapSettings *)0x0) {
      bVar2 = LayerEx::LayerEx_IsLayerBitSet
                        ((pGVar1->fields)._snapDestinationLayers,layerNumber,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean DoBeginSession() */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_DoBeginSession
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  if ((this->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    (this->fields)._isActive = 1;
    return 1;
  }
  return 0;
}


/* Void DoEndSession() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_DoEndSession
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._destinationObjects;
  (this->fields)._isActive = 0;
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    length = (pLVar1->fields)._size;
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean DoUpdateSession() */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_DoUpdateSession
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  GizmoObjectVertexSnapDrag3D_GatherDestinationObjects(this,(MethodInfo *)0x0);
  return 1;
}


/* Void GatherDestinationObjects() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_GatherDestinationObjects
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    func_?(&
                    MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0___GatherDestinationObjects_b__0_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_01 = TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0;
  value = (Object *)func_?();
  pOStack_6 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar7 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
  if ((pOVar7 != (Object *)0x0) && (value != (Object *)0x0)) {
    value[1].monitor = pOVar7[4].monitor;
    func_?();
    pLVar8 = (this->fields)._destinationObjects;
    if (pLVar8 != (List_1_UnityEngine_GameObject_ *)0x0) {
      length = (pLVar8->fields)._size;
      piVar9 = &(pLVar8->fields)._version;
      *piVar9 = *piVar9 + 1;
      (pLVar8->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar7 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if (pOVar7 != (Object *)0x0) {
        pOStack_10 = pOVar7[2].klass;
        if (pOStack_10 != (Object__Class *)0x0) {
          cVar11 = func_?();
          if (cVar11 == '\0') {
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          puVar12 = (undefined8 *)func_?(auStack_13 + 4);
          uVar14 = *puVar12;
          uStack_15._0_4_ = (Object__Class *)uVar14;
          value[4].klass = (Object__Class *)uStack_15;
          uStack_15._4_4_ = (MonitorData *)((ulonglong)uVar14 >> 0x20);
          value[4].monitor = uStack_15._4_4_;
          value[2].klass = (Object__Class *)0x0;
          value[2].monitor = (MonitorData *)0x0;
          value[3].klass = (Object__Class *)0x0;
          value[3].monitor = (MonitorData *)0x0;
          uStack_15 = uVar14;
          if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__GameObjectTypeHelper);
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RTG__GameObjectTypeHelper);
            cRam_? = '\x01';
          }
          if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__GameObjectTypeHelper);
          }
          value[2].klass =
               (Object__Class *)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
          pVVar16 = Vector3Ex::Vector3Ex_FromValue
                              ((Vector3 *)(auStack_13 + 4),1e-05,(MethodInfo *)0x0);
          pMVar17 = (MonitorData *)pVVar16->z;
          *(undefined8 *)&value[2].monitor = *(undefined8 *)pVVar16;
          value[3].monitor = pMVar17;
          if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          this_01 = (RTFocusCamera *)
                    MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                              (MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__get_Get__);
          if (this_01 != (RTFocusCamera *)0x0) {
            RTFocusCamera::RTFocusCamera_GetVisibleObjects
                      (this_01,(this->fields)._visibleObjectBuffer,(MethodInfo *)0x0);
            collection = (IEnumerable_1_System_Object_ *)(this->fields)._targetObjects;
            this_02 = (Object__Class *)func_?();
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object___ctor_1
                      ((List_1_System_Object_ *)this_02,collection,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                      );
            pOStack_6[1].klass = this_02;
            func_?();
            pLVar8 = (this->fields)._visibleObjectBuffer;
            pOStack_10 = (Object__Class *)
                         func_?(TypeInfo__System__Predicate<UnityEngine::GameObject>);
            mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                      ((Predicate_1_Object_ *)pOStack_10,pOStack_6,
                       MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_0___GatherDestinationObjects_b__0_UnityEngine__GameObject_
                       ,(MethodInfo *)0x0);
            if (pLVar8 != (List_1_UnityEngine_GameObject_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAll
                        ((List_1_System_Object_ *)pLVar8,(Predicate_1_Object_ *)pOStack_10,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                        );
              this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields)._visibleObjectBuffer;
              if (this_00 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                    ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)auStack_13,this_00,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                                    );
                uStack_19 = 0;
                method_00 = (MethodInfo *)pLVar18->_version;
                uStack_1 = 1;
                RVar20 = pLVar18->_current;
                pOStack_6 = (Object *)&stack0xffffffb0;
                while( true ) {
                  this_03 = RVar20;
                  bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                    );
                  if (bVar21 == 0) break;
                  pOStack_10 = (Object__Class *)(this->fields)._settings;
                  if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
                  method_00 = (MethodInfo *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_layer((GameObject *)this_03,(MethodInfo *)0x0);
                  if (pOStack_10 == (Object__Class *)0x0) goto code_?;
                  RVar20.First = 0;
                  RVar20.Last = 0;
                  layerBits._0_2_ = (pOStack_10->_0).byval_arg.attrs;
                  layerBits._2_1_ = (pOStack_10->_0).byval_arg.type;
                  layerBits._3_1_ = (pOStack_10->_0).byval_arg.field_0x7;
                  bVar21 = LayerEx::LayerEx_IsLayerBitSet
                                    (layerBits,(int32_t)method_00,(MethodInfo *)0x0);
                  if (bVar21 != 0) {
                    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
                      pGStack_22 = TypeInfo__RTG__GameObjectEx;
                      auStack_13._4_4_ = &UNK_?;
                      func_?();
                    }
                    GVar23 = GameObjectEx::GameObjectEx_GetGameObjectType
                                       ((GameObject *)this_03,(MethodInfo *)0x0);
                    if ((GVar23 == GameObjectType__Enum_Mesh) ||
                       (GVar23 == GameObjectType__Enum_Sprite)) {
                      pLVar8 = (this->fields)._destinationObjects;
                      if (pLVar8 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLVar8,(Object *)this_03,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                                );
                    }
                  }
                }
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffffb0,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                           ,method_00);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Boolean GetWorldPointClosestToInputDevice(Camera, IEnumerable`1[UnityEngine.GameObject], Vector3
   ByRef) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
               (GizmoObjectVertexSnapDrag3D *this,Camera *focusCamera,
               IEnumerable_1_UnityEngine_GameObject_ *gameObjects,Vector3 *point,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2._0_1_ = 0xff;
  uStack_2._1_3_ = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffe48;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffe48;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  func_?(&stack0xfffffedc,0,0x2c);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  point->x = (pVVar9->zeroVector).x;
  point->y = fVar10;
  point->z = fVar11;
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
code_?:
    *unaff_FS_OFFSET = uStack_4;
    return 0;
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar12 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar12 != (Object *)0x0) && (pOVar12[2].klass != (Object__Class *)0x0)) {
    cVar13 = func_?(8,TypeInfo__RTG__IInputDevice);
    if (cVar13 == '\0') goto code_?;
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    }
    pOVar12 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    if ((pOVar12 != (Object *)0x0) && (pOVar12[2].klass != (Object__Class *)0x0)) {
      pVVar14 = (Vector2 *)func_?(auStack_15,7,TypeInfo__RTG__IInputDevice);
      VStack_16 = *pVVar14;
      fStack_17 = VStack_16.x;
      fStack_18 = VStack_16.x;
      fStack_19 = VStack_16.y;
      fStack_20 = VStack_16.y;
      fStack_21 = _UNK_?;
      bStack_22 = 0;
      piStack_23 = (int *)func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                                          ,gameObjects);
      ppiVar24 = &piStack_23;
      uStack_25 = 0;
      uStack_2 = 0;
      ppiStack_26 = ppiVar24;
      do {
        uStack_2._0_1_ = 1;
code_?:
        do {
          if (piStack_23 == (int *)0x0) goto code_?;
          cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar13 == '\0') {
            uStack_2 = 0xffffffff;
            if (*ppiVar24 != (int *)0x0) {
              func_?(0,TypeInfo__System__IDisposable);
            }
            *unaff_FS_OFFSET = uStack_4;
            return bStack_22;
          }
          uStack_27 = CONCAT44(piStack_23,(float)uStack_27);
          if (piStack_23 == (int *)0x0) goto code_?;
          pLStack_28 = (List_1_RTG_MeshVertexChunk_ *)*piStack_23;
          uVar29 = 0;
          pGStack_30 = (GameObject *)0x0;
          uVar31 = *(ushort *)((int)&pLStack_28[7].fields._size + 2);
          pLStack_32 = (List_1_UnityEngine_Vector3_ *)(uint)uVar31;
          if (uVar31 != 0) {
            do {
              ppiVar24 = ppiStack_26;
              if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
                   (pLStack_28[3].fields._version + (uint)uVar29 * 8) ==
                  TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
                ppLVar33 = &pLStack_28[8].klass +
                           *(int *)(pLStack_28[3].fields._version + 4 + (uint)uVar29 * 8) * 2;
                goto code_?;
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 < uVar31);
          }
          ppLVar33 = (List_1_RTG_MeshVertexChunk___Class **)
                     func_?(piStack_23,
                                     TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                                    );
code_?:
          gameObject = (GameObject *)(*(code *)*ppLVar33)(uStack_27._4_4_);
          pGStack_30 = gameObject;
          if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__GameObjectEx);
          }
          x = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
          uStack_27 = CONCAT44(x,(float)uStack_27);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
            x = (Mesh *)uStack_27._4_4_;
          }
          bVar34 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar34 == 0) {
            if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__ObjectBounds);
            }
            pOVar35 = ObjectBounds::ObjectBounds_CalcSpriteWorldOBB
                                ((OBB *)&stack0xfffffe68,gameObject,(MethodInfo *)0x0);
            if ((char)*(undefined4 *)&pOVar35->_isValid != '\0') {
              worldPoints = OBB::OBB_GetCenterAndCornerPoints
                                      ((OBB *)&stack0xfffffedc,(MethodInfo *)0x0);
              pLStack_32 = worldPoints;
              if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__RTG__CameraEx);
              }
              points = CameraEx::CameraEx_ConvertWorldToScreenPoints
                                 (focusCamera,worldPoints,(MethodInfo *)0x0);
              VVar36.y = fStack_20;
              VVar36.x = fStack_18;
              pGStack_30 = (GameObject *)
                           Vector2Ex::Vector2Ex_GetPointClosestToPoint
                                     (points,VVar36,(MethodInfo *)0x0);
              if (-1 < (int)pGStack_30) {
                if (points == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
                VVar36 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                         List_1_UnityEngine_Vector2__get_Item
                                   (points,(int32_t)pGStack_30,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                                   );
                VStack_16.y = VVar36.y;
                fVar11 = (fStack_17 - VStack_16.x) * (fStack_17 - VStack_16.x) +
                         (fStack_19 - VStack_16.y) * (fStack_19 - VStack_16.y);
                VStack_16 = VVar36;
                if (fVar11 < fStack_21) {
                  fStack_21 = fVar11;
                  if (pLStack_32 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
                  pfVar37 = (float *)func_?(auStack_38,pLStack_32,pGStack_30);
                  bStack_22 = 1;
                  fVar10 = pfVar37[1];
                  fVar11 = pfVar37[2];
                  point->x = *pfVar37;
                  point->y = fVar10;
                  point->z = fVar11;
                }
              }
            }
            goto code_?;
          }
          if ((TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>);
          }
          this_00 = (MeshVertexChunkCollectionDb *)
                    Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                              (
                              MethodInfo__RTG__Singleton<RTG::MeshVertexChunkCollectionDb>__get_Get__
                              );
          if (this_00 == (MeshVertexChunkCollectionDb *)0x0) goto code_?;
          pMVar39 = MeshVertexChunkCollectionDb::MeshVertexChunkCollectionDb_get_Item
                              (this_00,(Mesh *)uStack_27._4_4_,(MethodInfo *)0x0);
          uStack_27 = CONCAT44(pMVar39,(float)uStack_27);
        } while (pMVar39 == (MeshVertexChunkCollection *)0x0);
        if ((gameObject == (GameObject *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (gameObject,(MethodInfo *)0x0), this_01 == (Transform *)0x0)) break;
        pMVar40 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_get_localToWorldMatrix
                            ((Matrix4x4 *)&stack0xfffffe58,this_01,(MethodInfo *)0x0);
        uStack_41 = 0;
        worldMtx_00 = *pMVar40;
        worldMtx = *pMVar40;
        method_00 = (MethodInfo *)pMVar40->m20;
        hoverPoint.y = fStack_19;
        hoverPoint.x = fStack_17;
        hoverPoint.z = 0.0;
        pLStack_28 = MeshVertexChunkCollection::
                     MeshVertexChunkCollection_GetWorldChunksHoveredByPoint
                               (uStack_27._4_4_,hoverPoint,*pMVar40,focusCamera,(MethodInfo *)0x0);
        if (pLStack_28 == (List_1_RTG_MeshVertexChunk_ *)0x0) break;
        if ((pLStack_28->fields)._size == 0) {
          screenPoint_00.y = fStack_20;
          screenPoint_00.x = fStack_18;
          this_02 = MeshVertexChunkCollection::
                    MeshVertexChunkCollection_GetWorldVertChunkClosestToScreenPt
                              (uStack_27._4_4_,screenPoint_00,worldMtx,focusCamera,(MethodInfo *)0x0
                              );
          if (this_02 != (MeshVertexChunk *)0x0) {
            iVar42 = MeshVertexChunk::MeshVertexChunk_get_VertexCount(this_02,(MethodInfo *)0x0);
            if (iVar42 != 0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLStack_28,(Object *)this_02,
                         MethodInfo__System__Collections__Generic__List<RTG::MeshVertexChunk>__Add_RTG__MeshVertexChunk_
                        );
            }
          }
        }
        puVar43 = (undefined4 *)func_?();
        uStack_44 = 0;
        LStack_8._list = (List_1_System_Object_ *)*puVar43;
        LStack_8._index = puVar43[1];
        LStack_8._version = puVar43[2];
        LStack_8._current = (Object *)puVar43[3];
        uStack_2._0_1_ = 3;
        pLStack_45 = &LStack_8;
        while (bVar34 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_8,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__MoveNext__
                                 ), bVar34 != 0) {
          if ((MeshVertexChunk *)LStack_8._current == (MeshVertexChunk *)0x0)
          goto code_?;
          screenPoint.y = fStack_20;
          screenPoint.x = fStack_18;
          pVVar46 = MeshVertexChunk::MeshVertexChunk_GetWorldVertClosestToScreenPt
                              (&VStack_47,(MeshVertexChunk *)LStack_8._current,screenPoint,
                               worldMtx_00,focusCamera,(MethodInfo *)0x0);
          pLStack_32 = (List_1_UnityEngine_Vector3_ *)pVVar46->z;
          uStack_27._0_4_ = pVVar46->x;
          uStack_27._4_4_ = (MeshVertexChunkCollection *)pVVar46->y;
          if (focusCamera == (Camera *)0x0) goto code_?;
          pVVar46 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              (&VStack_48,focusCamera,*pVVar46,(MethodInfo *)0x0);
          uStack_49._0_4_ = pVVar46->x;
          uStack_49._4_4_ = pVVar46->y;
          fVar11 = (fStack_17 - (float)(undefined4)uStack_49) *
                   (fStack_17 - (float)(undefined4)uStack_49) +
                   (fStack_19 - (float)uStack_49._4_4_) * (fStack_19 - (float)uStack_49._4_4_);
          if (fVar11 < fStack_21) {
            point->x = (float)uStack_27;
            point->y = (float)uStack_27._4_4_;
            point->z = (float)pLStack_32;
            bStack_22 = 1;
            fStack_21 = fVar11;
          }
        }
        uStack_2 = CONCAT31(uStack_2._1_3_,1);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::MeshVertexChunk>__Dispose__
                   ,method_00);
      } while( true );
    }
  }
code_?:
  func_?();
  uVar50 = func_?();
  func_?(uVar50);
  pcVar51 = (code *)swi(3);
  bVar34 = (*pcVar51)();
  return bVar34;
}


/* Boolean SelectSnapPivotPoint(Gizmo) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_SelectSnapPivotPoint
               (GizmoObjectVertexSnapDrag3D *this,Gizmo *gizmo,MethodInfo *method)

{
  if ((this->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                      (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
    if (cVar1 == '\0') {
      if (gizmo != (Gizmo *)0x0) {
        focusCamera = Gizmo::Gizmo_get_FocusCamera(gizmo,(MethodInfo *)0x0);
        bVar2 = GizmoObjectVertexSnapDrag3D_GetWorldPointClosestToInputDevice
                          (this,focusCamera,(this->fields)._targetObjects,&(this->fields)._snapPivot
                           ,(MethodInfo *)0x0);
        return bVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
  }
  return 0;
}


/* Void SetTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::
     GizmoObjectVertexSnapDrag3D_SetTargetObjects
               (GizmoObjectVertexSnapDrag3D *this,
               IEnumerable_1_UnityEngine_GameObject_ *targetObjects,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsActive_1.method)
                    (this,(this->klass->vtable).get_DragChannel_1.methodPtr);
  if (cVar1 == '\0') {
    (this->fields)._targetObjects = targetObjects;
    func_?(&(this->fields)._targetObjects,targetObjects);
  }
  return;
}


/* GizmoObjectVertexSnapDrag3D() */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D__ctor
               (GizmoObjectVertexSnapDrag3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapSettings);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._destinationObjects = pLVar1;
  func_?(&(this->fields)._destinationObjects,pLVar1);
  this_00 = (GizmoObjectVertexSnapSettings *)
            func_?(TypeInfo__RTG__GizmoObjectVertexSnapSettings);
  (this_00->fields)._snapDestinationLayers = -1;
  (this_00->fields)._canSnapToGrid = 1;
  (this_00->fields)._canSnapToObjectVerts = 1;
  Settings::Settings__ctor((Settings *)this_00,(MethodInfo *)0x0);
  (this->fields)._settings = this_00;
  func_?(&(this->fields)._settings,this_00);
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._visibleObjectBuffer = pLVar1;
  func_?(&(this->fields)._visibleObjectBuffer,pLVar1);
  GizmoDragSession::GizmoDragSession__ctor((GizmoDragSession *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_Settings(GizmoObjectVertexSnapSettings) */

void Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_set_Settings
               (GizmoObjectVertexSnapDrag3D *this,GizmoObjectVertexSnapSettings *value,
               MethodInfo *method)

{
  if (value != (GizmoObjectVertexSnapSettings *)0x0) {
    (this->fields)._settings = value;
    func_?(&(this->fields)._settings,value);
  }
  return;
}


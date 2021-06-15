
/* Void Add(RectTransform) */

void Assembly-CSharp.dll::TextBubble::TextBubble_Add
               (TextBubble *this,RectTransform *transformContent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).content;
  if (transformContent != (RectTransform *)0x0) {
    item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)transformContent,(MethodInfo *)0x0);
    if (this_00 != (List_1_UnityEngine_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                );
      parent = (Transform *)TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                ((Transform *)transformContent,parent,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single CalculatePivotNearEdgeOffset(Single) */

float Assembly-CSharp.dll::TextBubble::TextBubble_CalculatePivotNearEdgeOffset
                (TextBubble *this,float pivot,MethodInfo *method)

{
  fStack_1 = 0.0;
  auStack_2._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  auStack_2._8_4_ = (String *)0x0;
  auStack_2._12_4_ = 0.0;
  auStack_2._16_4_ = (undefined4)(int)((uint)(_UNK_? < pivot) * 2 + -1);
  fVar3 = (pivot - _UNK_?) * (float)auStack_2._16_4_;
  if (_UNK_? < fVar3) {
    this_00 = (this->fields).tail;
    if (this_00 == (RectTransform *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       (&RStack_7,this_00,(MethodInfo *)0x0);
    auStack_2._0_4_ = pRVar6->m_XMin;
    auStack_2._4_4_ = pRVar6->m_YMin;
    auStack_2._8_4_ = pRVar6->m_Width;
    auStack_2._12_4_ = pRVar6->m_Height;
    fVar8 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
            CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                      ((CrossPlatformInputManager_VirtualAxis *)auStack_2,(MethodInfo *)0x0);
    fStack_1 = fVar8 * (_UNK_? / fVar3) * (float)auStack_2._16_4_;
  }
  return fStack_1;
}


/* Void ClearContent() */

void Assembly-CSharp.dll::TextBubble::TextBubble_ClearContent(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (this->fields).content;
  do {
    if (this_00 == (List_1_UnityEngine_Object_ *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Count__
                       );
    this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).content;
    if ((int)pOVar2 <= index) {
      if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Clear__);
        return;
      }
      goto code_?;
    }
    if (this_01 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
    obj = (Object_1 *)
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
          IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                    );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    this_00 = (this->fields).content;
    index = index + 1;
  } while( true );
}


/* Void Initialize(Vector2, Int32) */

void Assembly-CSharp.dll::TextBubble::TextBubble_Initialize
               (TextBubble *this,Vector2 center,int32_t bubbleId,MethodInfo *method)

{
  (this->fields).centerPoint.x = center.x;
  (this->fields).centerPoint.y = center.y;
  (this->fields).bubbleId = bubbleId;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnDestroy(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).bubbleId != -1) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Bubble_not_removed_from_controll,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__TextBubble___OnDestroy_m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
              );
  }
  return;
}


/* Void OnRemoved() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnRemoved(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnRemoved,(MethodInfo *)0x0);
  (this->fields).bubbleId = -1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnValidate(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?();
  }
  value = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
  pRVar2 = TypeInfo__UnityEngine__RectTransform;
  if (pTVar1 == (Transform *)0x0) {
    func_?(0);
  }
  else {
    this_00 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      this_00 = pTVar1;
    }
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                ((RectTransform *)this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)(pRVar2);
  return;
}


/* Void RecalcPositionAndSize(Int32) */

void Assembly-CSharp.dll::TextBubble::TextBubble_RecalcPositionAndSize
               (TextBubble *this,int32_t inside,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  auStack_2._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  auStack_2._8_4_ = (String *)0x0;
  auStack_2._12_4_ = 0.0;
  auStack_3._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
  auStack_3._4_4_ = (Vector3 *)0x0;
  auStack_3._8_4_ = (String *)0x0;
  auStack_3._12_4_ = 0.0;
  VStack_4 = (this->fields).centerPoint;
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                    (VStack_4,2.0,(MethodInfo *)0x0);
  pTVar6 = (Transform *)(this->fields).tail;
  if (pTVar6 == (Transform *)0x0) goto code_?;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     (&VStack_8,pTVar6,(MethodInfo *)0x0);
  b = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                (*pVVar7,(MethodInfo *)0x0);
  VStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Subtraction
                        (VVar5,b,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    auStack_2._4_4_ = TypeInfo__UnityEngine__Mathf;
    auStack_2._0_4_ = &UNK_?;
    func_?();
  }
  VStack_8.z = 0.0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  if ((float)(double)CONCAT44((uint)((ulonglong)(double)VStack_4.y >> 0x20) & _UNK_?,
                              SUB84((double)VStack_4.y,0) & _UNK_?) <
      (float)(double)CONCAT44((uint)((ulonglong)(double)VStack_4.x >> 0x20) & _UNK_?,
                              SUB84((double)VStack_4.x,0) & _UNK_?)) {
    VStack_4.y = (float)((uint)(VStack_4.x <= 0.0) * 2 + -1);
    auStack_3._4_4_ = &VStack_8;
    auStack_3._8_4_ = (undefined4)(int)VStack_4.y;
    pTVar6 = (Transform *)(this->fields).tail;
    auStack_2._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
    auStack_3._12_4_ = 0.0;
    auStack_3._0_4_ = &UNK_?;
    func_?();
    if (pTVar6 == (Transform *)0x0) goto code_?;
    value_00.z = VStack_8.z;
    value_00.x = VStack_8.x;
    value_00.y = VStack_8.y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
              (pTVar6,value_00,(MethodInfo *)0x0);
    VStack_9 = TextBubble_get_Position(this,(MethodInfo *)0x0);
    iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fStack_11 = VStack_9.y / (float)iVar10;
    TextBubble_CalculatePivotNearEdgeOffset(this,fStack_11,(MethodInfo *)0x0);
    pRVar12 = (this->fields).tail;
    if (pRVar12 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)&stack0xffffff94,pRVar12,(MethodInfo *)0x0);
    fVar13 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
            CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                      ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffa4,(MethodInfo *)0x0);
    VStack_9.y = fVar13;
    func_?();
    pRVar12 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    auStack_3._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
    VStack_4.x = 0.0;
    VStack_4.y = 0.0;
    func_?();
    if (pRVar12 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar12,VStack_4,(MethodInfo *)0x0);
    this_00 = (Transform *)TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    pTVar6 = (Transform *)(this->fields).tail;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_8,pTVar6,(MethodInfo *)0x0);
    VStack_9.x = pVVar7->x;
    VStack_9.y = pVVar7->y;
    fVar13 = pVVar7->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    v_00.z = fVar13;
    v_00.x = VStack_9.x;
    v_00.y = VStack_9.y;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (v_00,(MethodInfo *)0x0);
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                      (VVar5,VStack_1,(MethodInfo *)0x0);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                       (&VStack_8,VVar5,(MethodInfo *)0x0);
  }
  else {
    fVar13 = (float)((uint)(VStack_4.y <= 0.0) * 2 + -1);
    VStack_9.y = fVar13;
    auStack_3._4_4_ = &VStack_8;
    auStack_3._12_4_ = (undefined4)(int)fVar13;
    pTVar6 = (Transform *)(this->fields).tail;
    auStack_2._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
    auStack_3._8_4_ = (String *)0x0;
    auStack_3._0_4_ = &UNK_?;
    func_?();
    if (pTVar6 == (Transform *)0x0) goto code_?;
    value.z = VStack_8.z;
    value.x = VStack_8.x;
    value.y = VStack_8.y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
              (pTVar6,value,(MethodInfo *)0x0);
    VStack_4 = TextBubble_get_Position(this,(MethodInfo *)0x0);
    iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    VStack_4.y = VStack_4.x / (float)iVar10;
    TextBubble_CalculatePivotNearEdgeOffset(this,VStack_4.x / (float)iVar10,(MethodInfo *)0x0);
    pRVar12 = (this->fields).tail;
    if (pRVar12 == (RectTransform *)0x0) goto code_?;
    pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffff94,pRVar12,(MethodInfo *)0x0);
    auStack_2._0_4_ = pRVar14->m_XMin;
    auStack_2._4_4_ = pRVar14->m_YMin;
    auStack_2._8_4_ = pRVar14->m_Width;
    auStack_2._12_4_ = pRVar14->m_Height;
    fStack_11 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
               CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                         ((CrossPlatformInputManager_VirtualAxis *)auStack_2,(MethodInfo *)0x0);
    func_?();
    pRVar12 = (this->fields).tail;
    if (pRVar12 == (RectTransform *)0x0) goto code_?;
    pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffff94,pRVar12,(MethodInfo *)0x0);
    auStack_3._0_4_ = pRVar14->m_XMin;
    auStack_3._4_4_ = pRVar14->m_YMin;
    auStack_3._8_4_ = pRVar14->m_Width;
    auStack_3._12_4_ = pRVar14->m_Height;
    fVar13 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
            CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                      ((CrossPlatformInputManager_VirtualAxis *)auStack_3,(MethodInfo *)0x0);
    VStack_9.y = fVar13;
    func_?();
    pRVar12 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    auStack_3._0_4_ = (CrossPlatformInputManager_VirtualAxis__Class *)0x0;
    func_?();
    if (pRVar12 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar12,VStack_9,(MethodInfo *)0x0);
    this_00 = (Transform *)TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    pTVar6 = (Transform *)(this->fields).tail;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_8,pTVar6,(MethodInfo *)0x0);
    VStack_4.x = pVVar7->x;
    VStack_4.y = pVVar7->y;
    fVar13 = pVVar7->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    v.z = fVar13;
    v.x = VStack_4.x;
    v.y = VStack_4.y;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (v,(MethodInfo *)0x0);
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                      (VVar5,VStack_1,(MethodInfo *)0x0);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                       (&VStack_8,VVar5,(MethodInfo *)0x0);
  }
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,*pVVar7,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RecalcPositionWithScreenCollision() */

void Assembly-CSharp.dll::TextBubble::TextBubble_RecalcPositionWithScreenCollision
               (TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  puStack_2 = (undefined *)0x0;
  TextBubble_RecalcPositionAndSize(this,1,(MethodInfo *)0x0);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  puStack_2 = (undefined *)(float)iVar4;
  fStack_1 = (float)iVar3;
  func_?(&fStack_1,0,0);
  fourCornersArray = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  this_00 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
  if (this_00 == (RectTransform *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetWorldCorners
              (this_00,fourCornersArray,(MethodInfo *)0x0);
    if (fourCornersArray == (Vector3__Array *)0x0) goto code_?;
    if (fourCornersArray->max_length == 0) goto code_?;
    cVar5 = func_?();
    if (cVar5 == '\0') goto code_?;
    if (fourCornersArray->max_length < 2) goto code_?;
    cVar5 = func_?();
    if (cVar5 == '\0') goto code_?;
    if (2 < fourCornersArray->max_length) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
code_?:
        TextBubble_RecalcPositionAndSize(this,-1,(MethodInfo *)0x0);
        return;
      }
      if (3 < fourCornersArray->max_length) {
        cVar5 = func_?();
        if (cVar5 != '\0') {
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTransparancy(Single) */

void Assembly-CSharp.dll::TextBubble::TextBubble_SetTransparancy
               (TextBubble *this,float a,MethodInfo *method)

{
  this_00 = (this->fields).fadeGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,a,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TextBubble::TextBubble_Start(TextBubble *this,MethodInfo *method)

{
  this_00 = (this->fields).fadeGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnDestroy>m__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::TextBubble::TextBubble__OnDestroy_m__0
               (TextBubble *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  key = (this->fields).bubbleId;
  if (x != (TextBubbleController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (x->fields).textBubbles;
    if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        return;
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(x->fields).textBubbles;
      if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                             ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) {
        (pTVar3->fields).m_patchSize.x = 0.0;
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(x->fields).textBubbles;
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                             );
          TextBubbleController::TextBubbleController_UpdateBubble
                    (x,(TextBubbleController_BubbleTracker *)pTVar3,(MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(x->fields).textBubbles;
          if (((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) &&
              (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  (pDVar2,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                  ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) &&
             (this_01 = (TextBubble *)(pTVar3->fields).m_patchSize.z, this_01 != (TextBubble *)0x0))
          {
            TextBubble_OnRemoved(this_01,(MethodInfo *)0x0);
            pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(x->fields).textBubbles;
            if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
               (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar2,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                   ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) {
              TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                        ((TextBubbleController_BubbleTracker *)pTVar3,(MethodInfo *)0x0);
              pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(x->fields).textBubbles;
              if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                          (pDVar2,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TextBubble() */

void Assembly-CSharp.dll::TextBubble::TextBubble__ctor(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__List__);
  (this->fields).content = (List_1_UnityEngine_Object_ *)this_00;
  (this->fields).bubbleId = -1;
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


/* RectTransform get_BubbleTransform() */

RectTransform *
Assembly-CSharp.dll::TextBubble::TextBubble_get_BubbleTransform(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bubble;
  if (this_00 == (LayoutGroup *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (RectTransform *)(*pcVar1)();
    return pRVar2;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this_00,(MethodInfo *)0x0);
  pTVar4 = (Transform *)0x0;
  if (pTVar3 != (Transform *)0x0) {
    if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar4 = pTVar3;
    }
    if (pTVar4 == (Transform *)0x0) {
      func_?(pTVar3);
      goto code_?;
    }
  }
  return (RectTransform *)pTVar4;
}


/* Single get_HorizontalPadding() */

float Assembly-CSharp.dll::TextBubble::TextBubble_get_HorizontalPadding
                (TextBubble *this,MethodInfo *method)

{
  pLVar1 = (this->fields).bubble;
  if (pLVar1 != (LayoutGroup *)0x0) {
    pRVar2 = (RectOffset *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        (MethodInfo *)0x0);
    if (pRVar2 != (RectOffset *)0x0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_left
                        (pRVar2,(MethodInfo *)0x0);
      pLVar1 = (this->fields).bubble;
      if (pLVar1 != (LayoutGroup *)0x0) {
        pRVar2 = (RectOffset *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            (MethodInfo *)0x0);
        if (pRVar2 != (RectOffset *)0x0) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_right
                            (pRVar2,(MethodInfo *)0x0);
          return (float)(iVar4 + iVar3);
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::TextBubble::TextBubble_get_Position
                  (TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Transform *)(this->fields).tail;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    v = *pVVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?();
    }
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (v,(MethodInfo *)0x0);
    return VVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  VVar2 = (Vector2)(*pcVar3)();
  return VVar2;
}


/* Single get_VerticalPadding() */

float Assembly-CSharp.dll::TextBubble::TextBubble_get_VerticalPadding
                (TextBubble *this,MethodInfo *method)

{
  pLVar1 = (this->fields).bubble;
  if (pLVar1 != (LayoutGroup *)0x0) {
    pRVar2 = (RectOffset *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        (MethodInfo *)0x0);
    if (pRVar2 != (RectOffset *)0x0) {
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_top
                        (pRVar2,(MethodInfo *)0x0);
      pLVar1 = (this->fields).bubble;
      if (pLVar1 != (LayoutGroup *)0x0) {
        pRVar2 = (RectOffset *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            (MethodInfo *)0x0);
        if (pRVar2 != (RectOffset *)0x0) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_bottom
                            (pRVar2,(MethodInfo *)0x0);
          return (float)(iVar4 + iVar3);
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::TextBubble::TextBubble_set_Position
               (TextBubble *this,Vector2 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Transform *)(this->fields).tail;
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit_1
                     ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,*pVVar1,(MethodInfo *)0x0);
    TextBubble_RecalcPositionWithScreenCollision(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


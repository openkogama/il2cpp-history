
/* Void Awake() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor_Awake(MobileAdsEventExecutor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
            ((Object_1 *)target,(MethodInfo *)0x0);
  return;
}


/* Void ExecuteInUpdate(Action) */

void Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor_ExecuteInUpdate(Action *action,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  obj = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->adEventsQueue;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter((Object *)obj,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?();
  }
  this = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->adEventsQueue;
  if (this != (List_1_System_Action_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)action,
               MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_);
    func_?();
    TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->adEventsQueueEmpty = 0
    ;
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit((Object *)obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor_Initialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  pMVar1 = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    this = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this,StringLiteral_MobileAdsMainThreadExecuter,(MethodInfo *)0x0);
    if (this == (GameObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)this,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DontDestroyOnLoad
              ((Object_1 *)this,(MethodInfo *)0x0);
    pMVar1 = (MobileAdsEventExecutor *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (this,
                        GoogleMobileAds__Common__MobileAdsEventExecutor_MethodInfo__UnityEngine__GameObject__AddComponent<GoogleMobileAds::Common::MobileAdsEventExecutor>__
                       );
    if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr
         & 0x2000000) != 0) &&
       ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
      pMStack4 = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor;
      func_?();
    }
    TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->instance = pMVar1;
  }
  return;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor_IsActive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  x = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor_OnDisable(MobileAdsEventExecutor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->instance =
       (MobileAdsEventExecutor *)0x0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor_Update(MobileAdsEventExecutor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  puStack_9 = &stack0xffffff9c;
  piStack_10 = (int *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     (puStack_9 = &stack0xffffff9c, piStack_10 = (int *)&stack0xffffff9c,
     puStack_4 = &stack0xffffff9c,
     (TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    puStack_9 = &stack0xffffff9c;
    piStack_10 = (int *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    func_?(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor);
  }
  bStack_11 = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->
              adEventsQueueEmpty;
  func_?();
  if (bStack_11 != 0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_01 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Action>);
  pLStack_12 = this_01;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::Action>__List__);
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?();
  }
  pLStack_13 = TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->
               adEventsQueue;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter((Object *)pLStack_13,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((((uint)(TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->_1).cctor_started == 0)) {
    func_?();
  }
  if (this_01 == (List_1_VoxelHit_ *)0x0) {
code_?:
    func_?();
    iVar14 = unaff_ESI;
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
              (this_01,(IEnumerable_1_VoxelHit_ *)
                       TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->
                       adEventsQueue,
               MethodInfo__System__Collections__Generic__List<System::Action>__AddRange_System__Collections__Generic__IEnumerable<System::Action>_
              );
    this_00 = (List_1_UnityEngine_UIVertex_ *)
              TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->
              adEventsQueue;
    if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<System::Action>__Clear__);
    CStack_7.monitor = (MonitorData *)&UNK_?;
    func_?();
    unaff_ESI = 0;
    TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->adEventsQueueEmpty = 1
    ;
    *piStack_10 = 0x48;
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit((Object *)pLStack_13,(MethodInfo *)0x0);
    iVar14 = unaff_ESI;
    if (iStack_6 == 0) {
      if (*piStack_10 == 0x48) {
        unaff_ESI = -1;
      }
      if (this_01 != (List_1_VoxelHit_ *)0x0) {
        pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa8,
                            (List_1_UnityEngine_Color32_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<System::Action>__GetEnumerator__
                           );
        CStack_7.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar15->l;
        CStack_7.monitor = (MonitorData *)pLVar15->next;
        CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar15->ver;
        CStack_7.fields.syncRoot = (Object *)(pLVar15->current).rgba;
        uStack_1 = 2;
        while (cVar16 = func_?(), iVar14 = iStack_6, cVar16 != '\0') {
          this_02 = (JumpState_OnWallJumpDelegate *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                              );
          if (this_02 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (this_02,(MethodInfo *)0x0);
        }
        *(undefined4 *)(puStack_9 + unaff_ESI * 4 + 4) = 0x81;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar14 == 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(iVar14);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* MobileAdsEventExecutor() */

void Assembly-CSharp.dll::GoogleMobileAds::Common::MobileAdsEventExecutor::
     MobileAdsEventExecutor__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->instance =
       (MobileAdsEventExecutor *)0x0;
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<System::Action>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<System::Action>__List__);
  TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->adEventsQueue =
       (List_1_System_Action_ *)this;
  func_?();
  TypeInfo__GoogleMobileAds__Common__MobileAdsEventExecutor->static_fields->adEventsQueueEmpty = 1;
  return;
}


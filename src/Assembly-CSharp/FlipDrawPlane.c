
/* Void Awake() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Awake(FlipDrawPlane *this,MethodInfo *method)

{
  pIVar1 = (this->fields).XAxisImage;
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
               (this->fields).NormalColor.b,(this->fields).NormalColor.a,
               (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      (*(code *)(pIVar1->klass->vtable).set_color.method)
                (pIVar1,(this->fields).SelectedColor.r,(this->fields).SelectedColor.g,
                 (this->fields).SelectedColor.b,(this->fields).SelectedColor.a,
                 (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        (*(code *)(pIVar1->klass->vtable).set_color.method)
                  (pIVar1,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
                   (this->fields).NormalColor.b,(this->fields).NormalColor.a,
                   (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
        (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
        if (cRam_? == '\0') {
          func_?(_UNK_?,unaff_EBP);
          cRam_? = '\x01';
        }
        pDVar2 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar2 != (DrawPlaneControllerUUI *)0x0) &&
           (this_00 = (pDVar2->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)
           ) {
          WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation
                    (this_00,DrawPlaneAxis__Enum_Y,(MethodInfo *)0x0);
          return;
        }
        func_?(0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Flip() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Flip(FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).drawPlaneAxises;
  iVar2 = (this->fields).currentIndex + 1;
  (this->fields).currentIndex = iVar2;
  if (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Count__);
    iVar2 = iVar2 % (int)pOVar3;
    pLVar1 = (this->fields).drawPlaneAxises;
    (this->fields).currentIndex = iVar2;
    if (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
      value = mscorlib.dll::System::Collections::Generic::List`1[DrawPlaneAxis]::
              List_1_DrawPlaneAxis__get_Item
                        (pLVar1,iVar2,
                         MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_
                        );
      DrawPlane::DrawPlane_set_Orientation(value,(MethodInfo *)0x0);
      FlipDrawPlane_HighlightImages(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HighlightImages() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_HighlightImages
               (FlipDrawPlane *this,MethodInfo *method)

{
  DVar1 = DrawPlane::DrawPlane_get_Orientation((MethodInfo *)0x0);
  pIVar2 = (this->fields).currentlySelectedImage;
  if (pIVar2 == (Image *)0x0) goto code_?;
  (*(code *)(pIVar2->klass->vtable).set_color.method)
            (pIVar2,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
             (this->fields).NormalColor.b,(this->fields).NormalColor.a,
             (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
  if (DVar1 == DrawPlaneAxis__Enum_X) {
    pIVar2 = (this->fields).XAxisImage;
code_?:
    (this->fields).currentlySelectedImage = pIVar2;
  }
  else {
    if (DVar1 == DrawPlaneAxis__Enum_Y) {
      pIVar2 = (this->fields).YAxisImage;
      goto code_?;
    }
    if (DVar1 == DrawPlaneAxis__Enum_Z) {
      pIVar2 = (this->fields).ZAxisImage;
      goto code_?;
    }
  }
  pIVar2 = (this->fields).currentlySelectedImage;
  if (pIVar2 != (Image *)0x0) {
    (*(code *)(pIVar2->klass->vtable).set_color.method)
              (pIVar2,(this->fields).SelectedColor.r,(this->fields).SelectedColor.g,
               (this->fields).SelectedColor.b,(this->fields).SelectedColor.a,
               (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitalizeImages() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_InitalizeImages
               (FlipDrawPlane *this,MethodInfo *method)

{
  pIVar1 = (this->fields).XAxisImage;
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
               (this->fields).NormalColor.b,(this->fields).NormalColor.a,
               (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      (*(code *)(pIVar1->klass->vtable).set_color.method)
                (pIVar1,(this->fields).SelectedColor.r,(this->fields).SelectedColor.g,
                 (this->fields).SelectedColor.b,(this->fields).SelectedColor.a,
                 (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        (*(code *)(pIVar1->klass->vtable).set_color.method)
                  (pIVar1,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
                   (this->fields).NormalColor.b,(this->fields).NormalColor.a,
                   (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
        (this->fields).currentlySelectedImage = (this->fields).YAxisImage;
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_OnEnable
               (FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).drawPlaneAxises;
  while (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Count__);
    if ((int)pOVar2 <= index) {
code_?:
      FlipDrawPlane_HighlightImages(this,(MethodInfo *)0x0);
      return;
    }
    pLVar1 = (this->fields).drawPlaneAxises;
    if (pLVar1 == (List_1_DrawPlaneAxis_ *)0x0) break;
    DVar3 = mscorlib.dll::System::Collections::Generic::List`1[DrawPlaneAxis]::
            List_1_DrawPlaneAxis__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_)
    ;
    DVar4 = DrawPlane::DrawPlane_get_Orientation((MethodInfo *)0x0);
    if (DVar3 == DVar4) {
      (this->fields).currentIndex = index;
      goto code_?;
    }
    index = index + 1;
    pLVar1 = (this->fields).drawPlaneAxises;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FlipDrawPlane() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane__ctor(FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<DrawPlaneAxis>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__List__);
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_Blocking,
               MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_None,
               MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,UIPushOption__Enum_HideAll,
               MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_);
    (this->fields).drawPlaneAxises = (List_1_DrawPlaneAxis_ *)this_00;
    uStack1 = 0;
    if (cRam_? == '\0') {
      pOStack2 = (Object_1__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      pOStack2 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


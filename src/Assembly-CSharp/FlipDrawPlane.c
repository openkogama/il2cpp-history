
/* Void Awake() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Awake(FlipDrawPlane *this,MethodInfo *method)

{
  pIVar1 = (this->fields).XAxisImage;
  if (pIVar1 != (Image *)0x0) {
    (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,(this->fields).NormalColor.r);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,(this->fields).SelectedColor.r);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        (*(pIVar1->klass->vtable).set_color.methodPtr)(pIVar1,(this->fields).NormalColor.r);
        pIVar1 = (this->fields).YAxisImage;
        (this->fields).currentlySelectedImage = pIVar1;
        func_?(&(this->fields).currentlySelectedImage,pIVar1);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar2 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar2 != (DrawPlaneControllerUUI *)0x0) &&
           (this_00 = (pDVar2->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)
           ) {
          WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation
                    (this_00,unaff_EBP,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar3 = func_?(&stack0xffffffe8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Flip() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Flip(FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).drawPlaneAxises;
  iVar1 = (this->fields).currentIndex + 1;
  (this->fields).currentIndex = iVar1;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    iVar1 = iVar1 % (this_00->fields)._size;
    (this->fields).currentIndex = iVar1;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      value = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iVar1,
                         MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_
                        );
      DrawPlane::DrawPlane_set_Orientation((DrawPlaneAxis__Enum)value,(MethodInfo *)0x0);
      FlipDrawPlane_HighlightImages(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HighlightImages() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_HighlightImages
               (FlipDrawPlane *this,MethodInfo *method)

{
  DVar1 = DrawPlane::DrawPlane_get_Orientation((MethodInfo *)0x0);
  pIVar2 = (this->fields).currentlySelectedImage;
  if (pIVar2 == (Image *)0x0) goto code_?;
  (*(pIVar2->klass->vtable).set_color.methodPtr)
            (pIVar2,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
             (this->fields).NormalColor.b,(this->fields).NormalColor.a,
             (pIVar2->klass->vtable).set_color.method);
  if (DVar1 == DrawPlaneAxis__Enum_X) {
    pIVar2 = (this->fields).XAxisImage;
code_?:
    (this->fields).currentlySelectedImage = pIVar2;
    func_?(&(this->fields).currentlySelectedImage,pIVar2);
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
    (*(pIVar2->klass->vtable).set_color.methodPtr)
              (pIVar2,(this->fields).SelectedColor.r,(this->fields).SelectedColor.g,
               (this->fields).SelectedColor.b,(this->fields).SelectedColor.a,
               (pIVar2->klass->vtable).set_color.method);
    return;
  }
code_?:
  func_?();
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
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
               (this->fields).NormalColor.b,(this->fields).NormalColor.a,
               (pIVar1->klass->vtable).set_color.method);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      (*(pIVar1->klass->vtable).set_color.methodPtr)
                (pIVar1,(this->fields).SelectedColor.r,(this->fields).SelectedColor.g,
                 (this->fields).SelectedColor.b,(this->fields).SelectedColor.a,
                 (pIVar1->klass->vtable).set_color.method);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        (*(pIVar1->klass->vtable).set_color.methodPtr)
                  (pIVar1,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
                   (this->fields).NormalColor.b,(this->fields).NormalColor.a,
                   (pIVar1->klass->vtable).set_color.method);
        pIVar1 = (this->fields).YAxisImage;
        (this->fields).currentlySelectedImage = pIVar1;
        func_?(&(this->fields).currentlySelectedImage,pIVar1);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_OnEnable
               (FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).drawPlaneAxises;
  while (pLVar1 != (List_1_DrawPlaneAxis_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
code_?:
      FlipDrawPlane_HighlightImages(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).drawPlaneAxises;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_)
    ;
    RVar3 = (RegexCharClass_SingleRange)DrawPlane::DrawPlane_get_Orientation((MethodInfo *)0x0);
    if (RVar2 == RVar3) {
      (this->fields).currentIndex = index;
      goto code_?;
    }
    index = index + 1;
    pLVar1 = (this->fields).drawPlaneAxises;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* FlipDrawPlane() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane__ctor(FlipDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<DrawPlaneAxis>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_DrawPlaneAxis_ *)
            func_?(TypeInfo__System__Collections__Generic__List<DrawPlaneAxis>);
  if (this_00 != (List_1_DrawPlaneAxis_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__List__);
    func_?(this_00,1,
                    MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_
                   );
    func_?(this_00,0,
                    MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_
                   );
    func_?(this_00,2,
                    MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_
                   );
    (this->fields).drawPlaneAxises = this_00;
    func_?(&(this->fields).drawPlaneAxises,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


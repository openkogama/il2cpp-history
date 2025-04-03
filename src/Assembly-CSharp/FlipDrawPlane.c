
/* Void Awake() */

void Assembly-CSharp.dll::FlipDrawPlane::FlipDrawPlane_Awake(FlipDrawPlane *this,MethodInfo *method)

{
  pIVar1 = (this->fields).XAxisImage;
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,(this->fields).NormalColor.r);
    pIVar1 = (this->fields).YAxisImage;
    if (pIVar1 != (Image *)0x0) {
      (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,(this->fields).SelectedColor.r);
      pIVar1 = (this->fields).ZAxisImage;
      if (pIVar1 != (Image *)0x0) {
        (*(code *)(pIVar1->klass->vtable).set_color.method)(pIVar1,(this->fields).NormalColor.r);
        pIVar1 = (this->fields).YAxisImage;
        ppIVar2 = &(this->fields).currentlySelectedImage;
        *ppIVar2 = pIVar1;
        func_?(ppIVar2,pIVar1);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar3 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar3 != (DrawPlaneControllerUUI *)0x0) &&
           (this_00 = (pDVar3->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)
           ) {
          WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation
                    (this_00,unaff_EBP,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar4 = func_?(&stack0xffffffe8);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  piVar1 = &(this->fields).currentIndex;
  *piVar1 = *piVar1 + 1;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).drawPlaneAxises;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    index = (this->fields).currentIndex % (this_00->fields)._size;
    (this->fields).currentIndex = index;
    value = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__get_Item_int_)
    ;
    DrawPlane::DrawPlane_set_Orientation((DrawPlaneAxis__Enum)value,(MethodInfo *)0x0);
    FlipDrawPlane_HighlightImages(this,(MethodInfo *)0x0);
    return;
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
  ppIVar3 = &(this->fields).currentlySelectedImage;
  if (pIVar2 == (Image *)0x0) goto code_?;
  (*(code *)(pIVar2->klass->vtable).set_color.method)
            (pIVar2,(this->fields).NormalColor.r,(this->fields).NormalColor.g,
             (this->fields).NormalColor.b,(this->fields).NormalColor.a,
             (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
  if (DVar1 == DrawPlaneAxis__Enum_X) {
    pIVar2 = (this->fields).XAxisImage;
code_?:
    *ppIVar3 = pIVar2;
    func_?(ppIVar3,pIVar2);
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
  pIVar2 = *ppIVar3;
  if (pIVar2 != (Image *)0x0) {
    (*(code *)(pIVar2->klass->vtable).set_color.method)
              (pIVar2,(this->fields).SelectedColor.r,(this->fields).SelectedColor.g,
               (this->fields).SelectedColor.b,(this->fields).SelectedColor.a,
               (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        ppIVar2 = &(this->fields).currentlySelectedImage;
        *ppIVar2 = (this->fields).YAxisImage;
        func_?(ppIVar2,unaff_EBP);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<DrawPlaneAxis>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pRVar3 = (this_00->fields)._items;
    if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < pRVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if (pRVar3->max_length <= uVar4) goto code_?;
        pRVar3->vector[uVar4].First = 1;
        pRVar3->vector[uVar4].Last = 0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (this_00,(RegexCharClass_SingleRange)0x1,pMVar1->klass->rgctx_data[0xe].method);
      }
      pMVar1 = MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_;
      piVar2 = &(this_00->fields)._version;
      *piVar2 = *piVar2 + 1;
      pRVar3 = (this_00->fields)._items;
      if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
        uVar4 = (this_00->fields)._size;
        if (uVar4 < pRVar3->max_length) {
          (this_00->fields)._size = uVar4 + 1;
          if (pRVar3->max_length <= uVar4) goto code_?;
          pRVar3->vector[uVar4].First = 0;
          pRVar3->vector[uVar4].Last = 0;
        }
        else {
          this = (FlipDrawPlane *)0x0;
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                    (this_00,(RegexCharClass_SingleRange)0x0,pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = MethodInfo__System__Collections__Generic__List<DrawPlaneAxis>__Add_DrawPlaneAxis_;
        piVar2 = &(this_00->fields)._version;
        *piVar2 = *piVar2 + 1;
        pRVar3 = (this_00->fields)._items;
        if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar4 = (this_00->fields)._size;
          if (pRVar3->max_length <= uVar4) {
            this = (FlipDrawPlane *)0x2;
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (this_00,(RegexCharClass_SingleRange)0x2,pMVar1->klass->rgctx_data[0xe].method
                      );
code_?:
            (this->fields).drawPlaneAxises = (List_1_DrawPlaneAxis_ *)this_00;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
                      ((MonoBehaviour *)this,(MethodInfo *)0x0);
            return;
          }
          (this_00->fields)._size = uVar4 + 1;
          if (uVar4 < pRVar3->max_length) {
            pRVar3->vector[uVar4].First = 2;
            pRVar3->vector[uVar4].Last = 0;
            goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


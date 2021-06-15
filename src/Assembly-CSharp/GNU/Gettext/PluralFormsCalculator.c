
/* Void DumpNodes(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_DumpNodes
               (PluralFormsCalculator *this,String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = this;
  if ((this->fields).plural == (PluralFormsNode *)0x0) {
    return;
  }
  method_00 = TypeInfo__GNU__Gettext__PluralFormsCalculator___DumpNodes_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  this_02 = (RecursiveTracer *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor(this_02,(MethodInfo *)0x0);
  if (((this_01 != (ScaleAnimationBase *)0x0) &&
      ((this_01->fields)._._._._.m_CachedPtr = this_02, this_02 != (RecursiveTracer *)0x0)) &&
     (this_00 = (this_02->fields)._Text_k__BackingField, this_00 != (StringBuilder *)0x0)) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
              (this_00,(pPVar1->fields).expression,(MethodInfo *)0x0);
    pvVar2 = (this_01->fields)._._._._.m_CachedPtr;
    if ((pvVar2 != (void *)0x0) &&
       (this = *(PluralFormsCalculator **)((int)pvVar2 + 0xc),
       (StringBuilder *)this != (StringBuilder *)0x0)) {
      fileName = (String *)0x0;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                ((StringBuilder *)this,(MethodInfo *)0x0);
      fileName = (String *)TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate;
      node = (pPVar1->fields).plural;
      this = (PluralFormsCalculator *)&UNK_?;
      doBefore = (PluralFormsNode_IterateNodesDelegate *)func_?();
      pMVar3 = 
      MethodInfo__GNU__Gettext__PluralFormsCalculator___DumpNodes_c__AnonStorey0____m__0_GNU__Gettext__PluralFormsNode_
      ;
      (doBefore->fields)._._.method_ptr =
           MethodInfo__GNU__Gettext__PluralFormsCalculator___DumpNodes_c__AnonStorey0____m__0_GNU__Gettext__PluralFormsNode_
           ->methodPointer;
      (doBefore->fields)._._.method = pMVar3;
      (doBefore->fields)._._.m_target = (Object *)this_01;
      this = (PluralFormsCalculator *)TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate;
      doAfter = (PluralFormsNode_IterateNodesDelegate *)func_?();
      pMVar3 = 
      MethodInfo__GNU__Gettext__PluralFormsCalculator___DumpNodes_c__AnonStorey0____m__1_GNU__Gettext__PluralFormsNode_
      ;
      (doAfter->fields)._._.method_ptr =
           MethodInfo__GNU__Gettext__PluralFormsCalculator___DumpNodes_c__AnonStorey0____m__1_GNU__Gettext__PluralFormsNode_
           ->methodPointer;
      (doAfter->fields)._._.method = pMVar3;
      (doAfter->fields)._._.m_target = (Object *)this_01;
      PluralFormsNode::PluralFormsNode_IterateNodes(node,doBefore,doAfter,(MethodInfo *)0x0);
      if ((this_01->fields)._._._._.m_CachedPtr != (void *)0x0) {
        method = (MethodInfo *)0xffffffff;
        fileName = (String *)&DAT_?;
        this = (PluralFormsCalculator *)*unaff_FS_OFFSET;
        *unaff_FS_OFFSET = &this;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        func_?();
        this_03 = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
        mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_3
                  (this_03,in_stack_4,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        if ((*(int **)(in_stack_5 + 0xc) != (int *)0x0) &&
           ((**(code **)(**(int **)(in_stack_5 + 0xc) + 0xd8))(),
           this_03 != (StreamWriter *)0x0)) {
          (*(code *)(this_03->klass->vtable).Write_4.method)();
          method = (MethodInfo *)0xffffffff;
          if (this_03 != (StreamWriter *)0x0) {
            func_?();
          }
          *unaff_FS_OFFSET = this;
          return;
        }
        func_?();
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  fileName = (String *)0x0;
  this = (PluralFormsCalculator *)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Int64 Evaluate(Int64, Boolean) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate
                  (PluralFormsCalculator *this,int64_t n,bool traceToFile,MethodInfo *method)

{
  this_00 = (this->fields).plural;
  if (((this_00 != (PluralFormsNode *)0x0) &&
      (iVar1 = PluralFormsNode::PluralFormsNode_Evaluate(this_00,n & 0xffffffff,unaff_EDI),
      -1 < iVar1)) && (iVar1 <= (this->fields).nplurals)) {
    return iVar1;
  }
  return 0;
}


/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Evaluate_1
                  (PluralFormsCalculator *this,int64_t n,MethodInfo *method)

{
  this_00 = (this->fields).plural;
  if (this_00 == (PluralFormsNode *)0x0) {
    return 0;
  }
  iVar1 = PluralFormsNode::PluralFormsNode_Evaluate(this_00,n & 0xffffffff,unaff_EDI);
  if ((-1 < iVar1) && (iVar1 <= (this->fields).nplurals)) {
    return iVar1;
  }
  return 0;
}


/* Void Init(Int32, PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Init
               (PluralFormsCalculator *this,int32_t nplurals,PluralFormsNode *plural,
               MethodInfo *method)

{
  (this->fields).nplurals = nplurals;
  (this->fields).plural = plural;
  return;
}


/* PluralFormsCalculator Make(String) */

PluralFormsCalculator *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator_Make
          (String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(str,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (PluralFormsCalculator *)0x0;
  }
  if (str != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral_u000A,(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0);
      str = mscorlib.dll::System::String::String_Remove_1
                      (str,(int32_t)((int)&pIVar2[-1].monitor + 3),1,(MethodInfo *)0x0);
    }
    if ((Collection_1_VoxelHit_ *)str != (Collection_1_VoxelHit_ *)0x0) {
      bVar1 = mscorlib.dll::System::String::String_EndsWith(str,StringLiteral__n,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0);
        str = mscorlib.dll::System::String::String_Remove_1
                        (str,(int32_t)((int)&pIVar2[-1].monitor + 2),2,(MethodInfo *)0x0);
      }
      if ((Collection_1_VoxelHit_ *)str != (Collection_1_VoxelHit_ *)0x0) {
        bVar1 = mscorlib.dll::System::String::String_EndsWith
                          (str,::StringLiteral__,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          str = mscorlib.dll::System::String::String_Concat_2
                          (str,::StringLiteral__,(MethodInfo *)0x0);
        }
        method_02 = TypeInfo__GNU__Gettext__PluralFormsCalculator;
        this = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_02);
        (this->fields)._._._._.m_CachedPtr = (void *)0x0;
        (this->fields).state = 0;
        (this->fields).originalScale.x = (float)str;
        this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GNU__Gettext__PluralFormsScanner);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_3);
        (this_00->fields)._._._._.m_CachedPtr = str;
        method_01 = TypeInfo__GNU__Gettext__PluralFormsToken;
        pSVar4 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)method_01);
        (this_00->fields).originalScale.x = (float)pSVar4;
        PluralFormsScanner::PluralFormsScanner_NextToken
                  ((PluralFormsScanner *)this_00,(MethodInfo *)0x0);
        method_00 = TypeInfo__GNU__Gettext__PluralFormsParser;
        pSVar4 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)method_00);
        (pSVar4->fields)._._._._.m_CachedPtr = this_00;
        bVar1 = PluralFormsParser::PluralFormsParser_Parse
                          ((PluralFormsParser *)pSVar4,(PluralFormsCalculator *)this,
                           (MethodInfo *)0x0);
        if (bVar1 == 0) {
          return (PluralFormsCalculator *)0x0;
        }
        return (PluralFormsCalculator *)this;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pPVar6 = (PluralFormsCalculator *)(*pcVar5)();
  return pPVar6;
}


/* PluralFormsCalculator(String) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator::PluralFormsCalculator__ctor
               (PluralFormsCalculator *this,String *expression,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).nplurals = 0;
  (this->fields).plural = (PluralFormsNode *)0x0;
  (this->fields).expression = expression;
  return;
}

